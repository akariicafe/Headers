@interface VIImageScaler : NSObject {
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BOOL useFill;
    void /* unknown type, empty encoding */ fillColor;
    void /* unknown type, empty encoding */ defaultBlackOpaqueColor;
    unsigned long long scaleMode;
    BOOL needFill;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } entireImage;
}

- (id)init;
- (void)dealloc;
- (int)setScalingMode:(unsigned long long)a0;
- (int)setVTTransferSessionProperties:(id)a0;
- (struct __CVBuffer { } *)createCroppedImageWithSource:(const struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct __CVBuffer { } *)createImageWithSource:(const struct __CVBuffer { } *)a0 format:(unsigned int)a1;
- (struct __CVBuffer { } *)createScaledImageWithSource:(const struct __CVBuffer { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (int)cropScaleImageFromSource:(const struct __CVBuffer { } *)a0 destination:(const struct __CVBuffer { } *)a1 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 bottomLeftBoxOrigin:(BOOL)a3;
- (int)cropScaleImageFromSource:(const struct __CVBuffer { } *)a0 destination:(const struct __CVBuffer { } *)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (int)scaleImageFromSource:(const struct __CVBuffer { } *)a0 destination:(const struct __CVBuffer { } *)a1;
- (int)setFillColorBGRA:(SEL)a0;
- (int)unsetFillColor;

@end
