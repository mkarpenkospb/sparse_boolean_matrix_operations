cmake_minimum_required (VERSION 3.1)
project(clbool)

add_subdirectory(libs)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++17")

find_package(OpenCL 1.1 REQUIRED)

set(CLBOOL_DIRS "libs/utils" )

set(KERNELS)
set(CLBOOL_SOURCES)

list(APPEND KERNELS
        merge_path
        merge_path1d
        csr_addition
        hash/hash_global
        submatrix
        reduce
        hash/bitonic_sort
        hash/hash_global
        hash/hash_pwarp
        hash/hash_tb
        prepare_positions
        coo_bitonic_sort
        set_positions
        prefix_sum
        coo_kronecker
        dscr_to_coo
        for_test/half_sized_scan
        to_result_matrix_single_thread
        to_result_matrix_work_group
        heap_merge
        copy_one_value
        merge_large_rows
        bitonic_esc
        count_workload
        dcsr_kronecker
        coo_reduce_duplicates
        initialization
        conversions
        )

foreach(KERNEL ${KERNELS})
    STRING(REPLACE "/" "___" HNAME ${KERNEL})
    convertIntoHeader(src/cl/${KERNEL}.cl src/cl/headers/${HNAME}.h ${HNAME}_kernel)
    list(APPEND CLBOOL_SOURCES src/cl/headers/${HNAME}.h)
    list(APPEND CLBOOL_SOURCES src/cl/${KERNEL}.cl)
endforeach ()

list(APPEND CLBOOL_SOURCES src/cl/headers/headers_map.hpp)

makeSourceMap("${KERNELS}")

list(APPEND CLBOOL_SOURCES
        # ------------------------ cpp files -------------------------------
        #core
        src/core/matrix_coo.cpp

        # coo
        src/coo/coo_matrix_addition.cpp
        src/coo/coo_initialization.cpp
        src/coo/coo_utils.cpp
        src/coo/coo_kronecker_product.cpp

        #dcsr
        src/dcsr/dcsr_matrix_multiplication.cpp
        src/dcsr/dcsr_matrix_multiplication_hash.cpp
        src/dcsr/dcsr_submatrix.cpp
        src/dcsr/dcsr_transpose.cpp
        src/dcsr/dcsr_reduce.cpp
        src/dcsr/dcsr_kronecker_product.cpp

        #csr
        src/csr/csr_addition.cpp

        #common
        src/common/matrices_conversions.cpp
        src/common/cl_operations.cpp
        src/common/utils.cpp
        src/common/cpu_matrix_operations.cpp
        src/common/env.cpp
        )

add_library(clbool SHARED ${CLBOOL_SOURCES})
target_link_libraries (clbool PUBLIC ${OpenCL_LIBRARY})
target_include_directories(clbool PUBLIC "libs/clew" ${LIB_CLASSES} ${CLBOOL_DIRS})

add_subdirectory(test)
set(CLBOOL_LIBRARY_FILE_NAME "libclbool.dll")
add_custom_command(
        TARGET clbool POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E
        copy
        "${CMAKE_BINARY_DIR}/${CLBOOL_LIBRARY_FILE_NAME}"
        "${CMAKE_BINARY_DIR}/test"
        #"${CMAKE_BINARY_DIR}/${CLBOOL_LIBRARY_FILE_NAME}.a"
        #"${CMAKE_BINARY_DIR}/test"
        COMMENT "Copy clbool compiled libs into test directory"
)
#endif()

# to use as submodule
target_include_directories(clbool PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src/)
target_compile_definitions(clbool PUBLIC CL_HPP_ENABLE_EXCEPTIONS)
target_compile_definitions(clbool PUBLIC CL_HPP_MINIMUM_OPENCL_VERSION=110)
target_compile_definitions(clbool PUBLIC CL_HPP_TARGET_OPENCL_VERSION=110)
