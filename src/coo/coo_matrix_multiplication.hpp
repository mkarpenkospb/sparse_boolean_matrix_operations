#pragma once


#include "../library_classes/controls.hpp"
#include "../library_classes/matrix_coo.hpp"
#include "../library_classes/matrix_dcsr.hpp"

typedef std::vector<uint32_t> cpu_buffer;


void prepare_positions(Controls &controls,
                       cl::Buffer &positions,
                       const cl::Buffer &array,
                       uint32_t size,
                       const std::string &program_name
);


void set_positions(Controls &controls,
                   cl::Buffer &rows_pointers,
                   cl::Buffer &rows_compressed,
                   const cl::Buffer &rows,
                   const cl::Buffer &positions,
                   uint32_t size,
                   uint32_t nzr
);


void create_rows_pointers(Controls &controls,
                          cl::Buffer &rows_pointers_out,
                          cl::Buffer &rows_compressed_out,
                          const cl::Buffer &rows,
                          uint32_t size,
                          uint32_t &nzr);

void count_workload(Controls &controls,
                    cl::Buffer &nnz_estimation_out,
                    const matrix_dcsr &a,
                    const matrix_dcsr &b);

void build_groups_and_allocate_new_matrix(Controls &controls,
                                          matrix_dcsr &pre,
                                          std::vector<cpu_buffer> &cpu_workload_groups,
                                          cl::Buffer &nnz_estimation,
                                          const matrix_dcsr &a,
                                          uint32_t b_cols
);

uint32_t get_group(uint32_t size);

auto get_heap_kernel(Controls &controls,
                     uint32_t group_length,
                     unsigned int nnz_estimation
);

auto get_copy_one_value_kernel(Controls &controls,
                               uint32_t group_length
);


void run_kernels(Controls &controls,
                 const std::vector<cpu_buffer> &cpu_workload_groups,
                 const cpu_buffer &groups_length,
                 const cpu_buffer &groups_pointers,

                 const cl::Buffer &gpu_workload_groups,
                 cl::Buffer &nnz_estimation,

                 const matrix_dcsr &pre,
                 const matrix_dcsr &a,
                 const matrix_dcsr &b
);

void write_bins_info(Controls &controls,
                     cl::Buffer &gpu_workload_groups,
                     const std::vector<cpu_buffer> &cpu_workload_groups,
                     cpu_buffer &groups_pointers,
                     cpu_buffer &groups_length
);

void create_final_matrix(Controls &controls,
                         matrix_dcsr &c,
                         cl::Buffer &nnz_estimation,
                         const matrix_dcsr &pre,

                         const cl::Buffer &gpu_workload_groups,
                         const cpu_buffer &groups_pointers,
                         const cpu_buffer &groups_length,

                         const matrix_dcsr &a
);

void matrix_multiplication(Controls &controls,
                           matrix_dcsr &matrix_out,
                           const matrix_coo &a,
                           const matrix_coo &b);

void matrix_multiplication(Controls &controls,
                           matrix_dcsr &matrix_out,
                           const matrix_dcsr &a,
                           const matrix_dcsr &b);

void set_positions(Controls &controls,
                   cl::Buffer &c_rows_pointers,
                   cl::Buffer &c_rows_compressed,
                   const cl::Buffer &nnz_estimation,
                   const cl::Buffer &a_rows_compressed,
                   const cl::Buffer &positions,
                   uint32_t c_nnz,
                   uint32_t old_nzr,
                   uint32_t c_nzr
);

auto get_esc_kernel(Controls &controls,
                    uint32_t nnz_estimation,
                    uint32_t group_length
);