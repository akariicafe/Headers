@interface PTTimedRenderingMetadataVersion2 : PTTimedRenderingMetadata {
    BOOL _readSuccessAll;
}

@property (nonatomic) float focusDisparity;
@property (nonatomic) float fNumber;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) struct CGSize { double width; double height; } totalSensorCropRectSize;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) unsigned int AGC;
@property (nonatomic) unsigned int conversionGain;
@property (nonatomic) unsigned int readNoise_1x;
@property (nonatomic) unsigned int readNoise_8x;
@property (nonatomic) unsigned int frameId;
@property (nonatomic) float alphaLowLight;

- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (void)applyToRenderRequest:(id)a0;
- (id)initWithData:(id)a0 minorVersion:(unsigned int)a1;

@end
