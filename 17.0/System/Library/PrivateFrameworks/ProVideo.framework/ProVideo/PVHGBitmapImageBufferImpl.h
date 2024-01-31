@class NSString;

@interface PVHGBitmapImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct HGRef<HGBitmap> { struct HGBitmap *m_Obj; } _bitmap;
    struct CGImage { } *_generatedCGImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct CGImage { } *)cgImage;
- (struct CGSize { double x0; double x1; })size;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)canCreateHGBitmap;
- (BOOL)cvPixelBufferRequiresCopy;
- (BOOL)cvPixelBufferRequiresRender;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;
- (id)initWithHGBitmap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0;

@end
