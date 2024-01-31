@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } *_ioSurface;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (struct __IOSurface { } *)ioSurface;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setIOSurface:(struct __IOSurface { } *)a0;

@end
