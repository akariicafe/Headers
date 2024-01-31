@class MKCircle, VKVectorOverlayCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer <NSSecureCoding> {
    VKVectorOverlayCircle *_vectorData;
    double _strokeStart;
    double _strokeEnd;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MKCircle *circle;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

+ (Class)_mapkitLeafClass;

- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)createPath;
- (void)encodeWithCoder:(id)a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCircle:(id)a0;
- (BOOL)_canProvideVectorGeometry;
- (void)_decodePropertiesWithCoder:(id)a0;
- (void)_performInitialConfiguration;
- (void)_updateRenderColors;
- (id)_vectorData;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)vectorDataForOverlay:(id)a0;

@end
