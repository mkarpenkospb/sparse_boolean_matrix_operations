#include <cstddef>
#pragma once

static const char prepare_positions_kernel[] = {
0x23, 0x69, 0x66, 0x6e, 0x64, 0x65, 0x66, 0x20, 0x52, 0x55, 0x4e, 0x0d, 0x0a, 0x0d, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 
0x75, 0x64, 0x65, 0x20, 0x22, 0x63, 0x6c, 0x69, 0x6f, 0x6e, 0x5f, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x73, 0x2e, 0x63, 
0x6c, 0x22, 0x0d, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x47, 0x52, 0x4f, 0x55, 0x50, 0x5f, 0x53, 0x49, 
0x5a, 0x45, 0x20, 0x32, 0x35, 0x36, 0x0d, 0x0a, 0x0d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0d, 0x0a, 0x0d, 0x0a, 
0x5f, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x20, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x70, 0x72, 0x65, 0x70, 0x61, 0x72, 
0x65, 0x5f, 0x61, 0x72, 0x72, 0x61, 0x79, 0x5f, 0x66, 0x6f, 0x72, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 
0x73, 0x28, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 0x65, 0x73, 
0x75, 0x6c, 0x74, 0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x63, 0x6f, 0x6e, 
0x73, 0x74, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 0x6f, 0x77, 0x73, 0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 
0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x63, 
0x6f, 0x6c, 0x73, 0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x0d, 0x0a, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 
0x20, 0x69, 0x6e, 0x74, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 0x20, 0x67, 0x65, 0x74, 
0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x28, 0x30, 0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 
0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3e, 0x3d, 0x20, 0x73, 
0x69, 0x7a, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 
0x72, 0x6e, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 
0x20, 0x69, 0x66, 0x20, 0x6f, 0x6e, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 
0x20, 0x77, 0x65, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 0x61, 0x6d, 0x65, 0x20, 0x76, 0x61, 
0x6c, 0x75, 0x65, 0x2c, 0x20, 0x77, 0x65, 0x20, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x30, 0x20, 0x69, 0x6e, 0x20, 0x72, 
0x65, 0x73, 0x75, 0x6c, 0x74, 0x2c, 0x20, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x77, 0x69, 0x73, 0x65, 0x20, 0x31, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 
0x5d, 0x20, 0x3d, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x20, 0x3f, 
0x20, 0x31, 0x20, 0x3a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 
0x61, 0x6c, 0x5f, 0x69, 0x64, 0x5d, 0x20, 0x3d, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 
0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 0x5d, 0x29, 0x20, 0x26, 0x26, 0x20, 0x28, 0x72, 0x6f, 0x77, 0x73, 0x5b, 
0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x5d, 0x20, 0x3d, 0x3d, 0x20, 0x72, 0x6f, 0x77, 0x73, 0x5b, 0x67, 
0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 0x5d, 0x29, 0x20, 0x3f, 0x0d, 0x0a, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x30, 0x20, 0x3a, 0x20, 0x31, 0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x5f, 0x5f, 0x6b, 
0x65, 0x72, 0x6e, 0x65, 0x6c, 0x20, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x70, 0x72, 0x65, 0x70, 0x61, 0x72, 0x65, 0x5f, 0x61, 
0x72, 0x72, 0x61, 0x79, 0x5f, 0x66, 0x6f, 0x72, 0x5f, 0x72, 0x6f, 0x77, 0x73, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 
0x6f, 0x6e, 0x73, 0x28, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 
0x65, 0x73, 0x75, 0x6c, 0x74, 0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 
0x62, 0x61, 0x6c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 0x6f, 0x77, 0x73, 
0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x0d, 
0x0a, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 
0x20, 0x69, 0x6e, 0x74, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 0x20, 0x67, 0x65, 0x74, 
0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x28, 0x30, 0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 
0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3e, 0x3d, 0x20, 0x73, 
0x69, 0x7a, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 
0x72, 0x6e, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 
0x20, 0x69, 0x66, 0x20, 0x6f, 0x6e, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 
0x20, 0x77, 0x65, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 0x61, 0x6d, 0x65, 0x20, 0x76, 0x61, 
0x6c, 0x75, 0x65, 0x2c, 0x20, 0x77, 0x65, 0x20, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x30, 0x20, 0x69, 0x6e, 0x20, 0x72, 
0x65, 0x73, 0x75, 0x6c, 0x74, 0x2c, 0x20, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x77, 0x69, 0x73, 0x65, 0x20, 0x31, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 
0x5d, 0x20, 0x3d, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x20, 0x3f, 
0x20, 0x31, 0x20, 0x3a, 0x20, 0x28, 0x72, 0x6f, 0x77, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 
0x5d, 0x20, 0x3d, 0x3d, 0x20, 0x72, 0x6f, 0x77, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 
0x2d, 0x20, 0x31, 0x5d, 0x29, 0x20, 0x3f, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x20, 0x3a, 0x20, 0x31, 0x3b, 0x0d, 
0x0a, 0x0d, 0x0a, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x5f, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 
0x20, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x70, 0x72, 0x65, 0x70, 0x61, 0x72, 0x65, 0x5f, 0x61, 0x72, 0x72, 0x61, 0x79, 0x5f, 
0x66, 0x6f, 0x72, 0x5f, 0x73, 0x68, 0x69, 0x66, 0x74, 0x28, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x75, 
0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 
0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 0x6f, 0x77, 0x73, 0x2c, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 
0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x63, 
0x6f, 0x6c, 0x73, 0x2c, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x67, 0x6c, 0x6f, 
0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 0x20, 0x67, 0x65, 0x74, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 
0x69, 0x64, 0x28, 0x30, 0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x67, 0x6c, 
0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3e, 0x3d, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 
0x20, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x20, 0x69, 0x66, 0x20, 0x6f, 0x6e, 0x20, 0x67, 
0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 0x20, 0x77, 0x65, 0x20, 0x68, 0x61, 0x76, 0x65, 
0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 0x61, 0x6d, 0x65, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x2c, 0x20, 0x77, 0x65, 0x20, 
0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x31, 0x20, 0x69, 0x6e, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x2c, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x20, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x77, 0x69, 0x73, 0x65, 0x20, 0x30, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 
0x5d, 0x20, 0x3d, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x20, 0x3f, 
0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x63, 
0x6f, 0x6c, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x5d, 0x20, 0x3d, 0x3d, 0x20, 0x63, 0x6f, 
0x6c, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 0x5d, 0x29, 0x20, 0x26, 
0x26, 0x20, 0x28, 0x72, 0x6f, 0x77, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x5d, 0x20, 0x3d, 
0x3d, 0x20, 0x72, 0x6f, 0x77, 0x73, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 
0x5d, 0x29, 0x20, 0x3f, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x31, 0x20, 0x3a, 0x20, 0x30, 0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 
0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x5f, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x20, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x70, 
0x72, 0x65, 0x70, 0x61, 0x72, 0x65, 0x5f, 0x66, 0x6f, 0x72, 0x5f, 0x73, 0x68, 0x69, 0x66, 0x74, 0x5f, 0x65, 0x6d, 0x70, 
0x74, 0x79, 0x5f, 0x72, 0x6f, 0x77, 0x73, 0x28, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x75, 0x6e, 0x73, 
0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x2c, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x6e, 
0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x2a, 0x20, 0x6e, 0x6e, 0x7a, 0x5f, 0x65, 0x73, 0x74, 0x69, 
0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x2f, 0x2f, 0x20, 0x21, 0x21, 0x21, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 
0x70, 0x72, 0x65, 0x66, 0x69, 0x78, 0x20, 0x73, 0x75, 0x6d, 0x20, 0x6f, 0x6e, 0x20, 0x69, 0x74, 0x21, 0x2c, 0x20, 0x73, 
0x69, 0x7a, 0x65, 0x2b, 0x31, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 
0x6e, 0x74, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x0d, 0x0a, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 
0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 
0x69, 0x64, 0x20, 0x3d, 0x20, 0x67, 0x65, 0x74, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x28, 0x30, 
0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 
0x5f, 0x69, 0x64, 0x20, 0x3e, 0x3d, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x20, 0x20, 0x54, 0x4f, 0x44, 0x4f, 0x3a, 0x20, -0x30, -0x4c, -0x30, -0x42, -0x30, -0x45, 
-0x30, -0x4a, -0x30, -0x4b, -0x30, -0x43, 0x20, -0x30, -0x4f, -0x2f, -0x75, -0x2f, -0x7e, -0x2f, -0x74, 0x20, 0x67, 0x6c, 0x6f, 0x62, 
0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x2d, 0x20, 0x31, 0x2c, 0x20, -0x30, -0x41, -0x2f, -0x80, -0x30, -0x42, -0x30, -0x4e, -0x30, 
-0x4b, -0x2f, -0x80, -0x30, -0x48, -0x2f, -0x7e, -0x2f, -0x74, 0x2c, 0x20, -0x30, -0x4d, -0x30, -0x4c, -0x30, -0x4b, 0x20, -0x30, -0x48, 
-0x2f, -0x7f, -0x30, -0x41, -0x30, -0x42, -0x30, -0x45, -0x2f, -0x74, -0x30, -0x49, -0x2f, -0x7d, -0x30, -0x4b, -0x2f, -0x7e, -0x2f, -0x7f, 
-0x2f, -0x71, 0x2e, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 
0x61, 0x6c, 0x5f, 0x69, 0x64, 0x5d, 0x20, 0x3d, 0x20, 0x6e, 0x6e, 0x7a, 0x5f, 0x65, 0x73, 0x74, 0x69, 0x6d, 0x61, 0x74, 
0x69, 0x6f, 0x6e, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x5d, 0x20, 0x3d, 0x3d, 0x20, 0x6e, 0x6e, 
0x7a, 0x5f, 0x65, 0x73, 0x74, 0x69, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5b, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 
0x69, 0x64, 0x20, 0x2b, 0x20, 0x31, 0x5d, 0x20, 0x20, 0x3f, 0x20, 0x30, 0x20, 0x3a, 0x20, 0x31, 0x3b, 0x0d, 0x0a, 0x0d, 
0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x20, 0x3d, 
0x3d, 0x20, 0x30, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 
0x6c, 0x74, 0x5b, 0x73, 0x69, 0x7a, 0x65, 0x5d, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 
0x0d, 0x0a, 0x7d, 
};

static size_t prepare_positions_kernel_length = sizeof(prepare_positions_kernel) / sizeof(char);
