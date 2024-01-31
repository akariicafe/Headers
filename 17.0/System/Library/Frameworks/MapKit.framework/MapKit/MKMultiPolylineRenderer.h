@class VKVectorOverlayPolylineGroup, MKMultiPolyline;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer <NSSecureCoding> {
    VKVectorOverlayPolylineGroup *_vectorGeometry;
    double _strokeStart;
    double _strokeEnd;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_strokeStart, setter=_setStrokeStart:) double strokeStart;
@property (nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) double strokeEnd;
@property (readonly, nonatomic) MKMultiPolyline *multiPolyline;

+ (Class)_mapkitLeafClass;

- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)createPath;
- (void)encodeWithCoder:(id)a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setLineCap:(int)a0;
- (void)setLineJoin:(int)a0;
- (void)setMiterLimit:(double)a0;
- (id)_vectorGeometry;
- (BOOL)_canProvideVectorGeometry;
- (void)_decodePropertiesWithCoder:(id)a0;
- (void)_performInitialConfiguration;
- (void)_updateRenderColors;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)initWithMultiPolyline:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;

@end
