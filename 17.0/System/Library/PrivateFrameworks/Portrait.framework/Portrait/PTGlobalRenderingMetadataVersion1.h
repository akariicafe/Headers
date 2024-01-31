@interface PTGlobalRenderingMetadataVersion1 : PTGlobalRenderingMetadata {
    unsigned int _renderingVersion;
    BOOL _readSuccessAll;
}

@property (nonatomic) float defaultAperture;
@property (nonatomic) float minAperture;
@property (nonatomic) float maxAperture;
@property (nonatomic) float highlightBoostFactor;
@property (nonatomic) float highlightChromaFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sensorCropRect;
@property (nonatomic) struct { int width; int height; } rawSensorSize;
@property (nonatomic) float focalLength35mm;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicsMatrix;
@property (nonatomic) unsigned int conversionGain;
@property (nonatomic) unsigned int readNoise1x;
@property (nonatomic) unsigned int readNoise8x;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) unsigned int sensorID;
@property (nonatomic) unsigned int sourceColorBitDepth;
@property (nonatomic) float networkBias;
@property (nonatomic) float noiseScaleFactor;
@property (nonatomic) unsigned int hwModelID;

- (unsigned int)renderingVersion;
- (id)initWithData:(id)a0;
- (void)setRenderingVersion:(unsigned int)a0;
- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (void)applyToRenderRequest:(id)a0;
- (void)applyToRenderState:(id)a0;
- (BOOL)matchesRenderState:(id)a0;
- (BOOL)applyToRenderState:(id)a0 error:(id *)a1;
- (BOOL)nanAwareEqual:(float)a0 with:(float)a1;

@end
