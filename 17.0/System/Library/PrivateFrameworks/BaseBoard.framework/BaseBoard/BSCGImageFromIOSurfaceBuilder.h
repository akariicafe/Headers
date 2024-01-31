@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    IOSurface *_surface;
    struct CGImage { } *_image;
    BOOL _isDirty;
}

@property (readonly, nonatomic, getter=isOpaque) BOOL opaque;

- (void)dealloc;
- (id)setOpaque:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)buildCGImage;

@end
