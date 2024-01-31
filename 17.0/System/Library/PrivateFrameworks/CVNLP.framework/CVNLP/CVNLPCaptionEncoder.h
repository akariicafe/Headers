@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase {
    unsigned long long data_dim[4];
}

- (void)computeCaptionForImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 outputs:(id *)a1;
- (unsigned long long)_blob_size:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0;
- (void)_fill_blob_data:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 with:(float)a1;
- (void)computeCaptionForPixelBuffer:(struct __CVBuffer { } *)a0 outputs:(id *)a1;

@end
