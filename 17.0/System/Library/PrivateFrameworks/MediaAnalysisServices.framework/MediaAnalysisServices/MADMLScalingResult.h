@class IOSurface;

@interface MADMLScalingResult : MADResult {
    IOSurface *_surface;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    struct CF<CGImage *> { struct CGImage *value_; } _image;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct CGImage { } *image;

+ (BOOL)supportsSecureCoding;

- (id)initWithSurface:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
