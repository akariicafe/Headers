@class IOSurface;

@interface MADVideoRemoveBackgroundPreviewFrame : NSObject <NSSecureCoding> {
    IOSurface *_surface;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 surface:(id)a1;

@end
