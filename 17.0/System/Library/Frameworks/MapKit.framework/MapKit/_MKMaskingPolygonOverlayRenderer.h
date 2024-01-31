@class VKVectorOverlayMaskingPolygonGroup;

@interface _MKMaskingPolygonOverlayRenderer : MKOverlayRenderer {
    VKVectorOverlayMaskingPolygonGroup *_vectorData;
}

@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)_vectorGeometry;
- (BOOL)_canPossiblyDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)_canProvideVectorGeometry;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (id)initWithMultiPolygon:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;

@end
