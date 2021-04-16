#include <algorithm>
#include "coo_tests.hpp"

#include "../coo/coo_utils.hpp"
#include "../dcsr/dcsr_matrix_multiplication.hpp"
#include "../cl/headers/new_merge.h"
using namespace coo_utils;
using namespace utils;

void test_pref_sum() {
    Controls controls = create_controls();
    timer t;
    for (int size = 1000000; size < 1001000; size += 100) {
        if (DEBUG_ENABLE) Log() << "------------------" << " size = " << size << " --------------------";

        utils::cpu_buffer vec(size, 0);
        utils::fill_random_buffer(vec, 3);
        vec.push_back(0);

        cl::Buffer vec_gpu(controls.queue, vec.begin(), vec.end(), false);

        int prev;

        t.restart(); {
            prev = vec[0];
            int tmp;
            vec[0] = 0;
            for (int i = 1; i < vec.size(); ++i) {
                tmp = vec[i];
                vec[i] = prev;
                prev += tmp;
            }
        } t.elapsed();
        if (DEBUG_ENABLE) Log() << "CPU prefix sum finished in " << t.last_elapsed();

        uint32_t total;

        t.restart(); {
            prefix_sum(controls, vec_gpu, total, size + 1);
        } t.elapsed();
        if (DEBUG_ENABLE) Log() << "DEVICE prefix sum finished in " << t.last_elapsed();

        if (total != prev) {
            throw std::runtime_error("sums are different!");
        }

        compare_buffers(controls, vec_gpu, vec, size + 1);
    }
}