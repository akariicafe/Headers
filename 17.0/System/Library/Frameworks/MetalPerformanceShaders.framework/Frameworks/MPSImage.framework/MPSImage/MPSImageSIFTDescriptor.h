@interface MPSImageSIFTDescriptor : NSObject

@property (nonatomic) float sigma;
@property (nonatomic) unsigned long long layersPerOctave;
@property (nonatomic) unsigned long long octaves;
@property (nonatomic) BOOL upscale;
@property (nonatomic) float contrastThreshold;
@property (nonatomic) unsigned long long edgeThreshold;
@property (nonatomic) float initialSigma;
@property (nonatomic) unsigned long long imageBoundary;
@property (nonatomic) float orientationRadius;
@property (nonatomic) float orientationWeight;
@property (nonatomic) unsigned long long orientationBins;
@property (nonatomic) float orientationThreshold;
@property (nonatomic) unsigned long long maximumKeyPoints;

- (id)init;

@end
