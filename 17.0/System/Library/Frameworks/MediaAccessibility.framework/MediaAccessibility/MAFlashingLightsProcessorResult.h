@interface MAFlashingLightsProcessorResult : NSObject

@property (nonatomic) BOOL surfaceProcessed;
@property (nonatomic) float mitigationLevel;
@property (nonatomic) float intensityLevel;

- (id)description;

@end
