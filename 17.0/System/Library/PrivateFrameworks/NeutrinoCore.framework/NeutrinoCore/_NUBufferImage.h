@class NSString, NUImageLayout, NUColorSpace, NUPixelFormat, NURegion;

@interface _NUBufferImage : _NUImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>

@property (readonly) NUImageLayout *layout;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) struct { long long x0; long long x1; } size;
@property (readonly, copy) NURegion *validRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (void)readBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)copyBufferStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toPoint:(struct { long long x0; long long x1; })a2;
- (BOOL)copySurfaceStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toPoint:(struct { long long x0; long long x1; })a2 device:(id)a3;
- (void)writeBufferRegion:(id)a0 withBlock:(id /* block */)a1;

@end
