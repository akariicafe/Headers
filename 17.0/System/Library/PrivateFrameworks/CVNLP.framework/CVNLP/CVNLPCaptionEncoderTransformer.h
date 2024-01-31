@interface CVNLPCaptionEncoderTransformer : CVNLPCaptionEncoder {
    void *encoderPlan;
    void *encoderCtx;
    struct { void *plan; int network_index; } encoderNet;
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } encoderInputNames;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } attFeatsBlob;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)computeCaptionForImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 outputs:(id *)a1;
- (void)computeCaptionForImageImpl:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 outputs:(id *)a1;
- (void)computeCaptionForPixelBuffer:(struct __CVBuffer { } *)a0 outputs:(id *)a1;
- (void)computeCaptionForPixelBufferImpl:(struct __CVBuffer { } *)a0 outputs:(id *)a1;
- (void)computeCaptionForVideoPixelBuffer:(void *)a0 outputs:(id *)a1;
- (void)computeCaptionForVideoPixelBufferImpl:(void *)a0 outputs:(id *)a1;
- (id)initWithOptions:(id)a0 runTimeParams:(id)a1;

@end
