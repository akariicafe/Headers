@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment {
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } buffer;
}

@property int nChannels;

+ (struct __CVBuffer { } *)createCVPixelBufferFromvImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 withPixelFormat:(unsigned int)a1;

- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })copyAsImageGrayscaleOrBGRA;
- (void)loadFromDict:(id)a0 frameStorage:(id)a1;

@end
