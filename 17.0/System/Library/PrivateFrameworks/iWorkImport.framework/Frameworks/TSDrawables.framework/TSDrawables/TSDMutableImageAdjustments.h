@interface TSDMutableImageAdjustments : TSDImageAdjustments

@property (nonatomic) double exposure;
@property (nonatomic) double saturation;
@property (nonatomic) double contrast;
@property (nonatomic) double highlights;
@property (nonatomic) double shadows;
@property (nonatomic) double sharpness;
@property (nonatomic) double denoise;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) double bottomLevel;
@property (nonatomic) double topLevel;
@property (nonatomic) double gamma;
@property (nonatomic) BOOL enhance;
@property (nonatomic) BOOL representsSageAdjustments;

- (void)setTemperature:(double)a0;
- (void)setContrast:(double)a0;
- (void)setTint:(double)a0;
- (void)setSaturation:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSharpness:(double)a0;
- (void)setExposure:(double)a0;
- (void)setHighlights:(double)a0;
- (void)setTopLevel:(double)a0;
- (void)setGamma:(double)a0;
- (void)setBottomLevel:(double)a0;
- (void)setDenoise:(double)a0;
- (void)setEnhance:(BOOL)a0;
- (void)setRepresentsSageAdjustments:(BOOL)a0;
- (void)setShadows:(double)a0;

@end
