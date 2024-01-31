@class NSString, NUImageLayout, NUColorSpace, NUPixelFormat, NURegion;
@protocol NUMutableBufferProvider;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage> {
    id<NUMutableBufferProvider> _mutableBufferProvider;
}

@property (readonly) NUImageLayout *layout;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) struct { long long x0; long long x1; } size;
@property (readonly, copy) NURegion *validRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMutableBuffer:(id)a0 colorSpace:(id)a1 validRegion:(id)a2;
- (BOOL)copyBufferStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toPoint:(struct { long long x0; long long x1; })a2;
- (BOOL)copySurfaceStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toPoint:(struct { long long x0; long long x1; })a2 device:(id)a3;
- (id)initWithBufferProvider:(id)a0 colorSpace:(id)a1 validRegion:(id)a2;
- (id)initWithMutableBufferProvider:(id)a0 colorSpace:(id)a1 validRegion:(id)a2;
- (void)writeBufferRegion:(id)a0 withBlock:(id /* block */)a1;

@end
