@interface VCPVideoMetaLensSwitchAnalyzer : NSObject

@property (nonatomic) BOOL hadZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) float maxZoom;
@property (nonatomic) BOOL settlingHadZoom;
@property (nonatomic) float settlingMinZoom;
@property (nonatomic) float settlingMaxZoom;

- (id)init;
- (id)results;

@end
