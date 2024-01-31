@interface VNGeneratePersonSegmentationRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) BOOL useTiling;
@property (nonatomic) BOOL keepRawOutputMask;
@property (nonatomic) float minimumConfidence;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
