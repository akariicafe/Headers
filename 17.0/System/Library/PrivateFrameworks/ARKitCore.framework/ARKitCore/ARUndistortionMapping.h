@interface ARUndistortionMapping : NSObject {
    struct CGSize { double width; double height; } _imageSize;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _mappingU;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _mappingV;
    struct vImageMapping { } *_mapping;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)createVImageMappingIfNeededForImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;

@end
