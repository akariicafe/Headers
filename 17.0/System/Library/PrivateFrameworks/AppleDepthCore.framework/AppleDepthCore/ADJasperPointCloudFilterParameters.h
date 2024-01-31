@interface ADJasperPointCloudFilterParameters : NSObject

@property (nonatomic) unsigned long long echoMode;
@property (nonatomic) unsigned long long bankIDMask;
@property (nonatomic) float confidenceThreshold;
@property (nonatomic) float minDistance;
@property (nonatomic) float maxDistance;
@property (nonatomic) float shortRangeDepthThreshold;
@property (nonatomic) float shortRangeConfidenceThreshold;

+ (id)emptyFilter;

- (id)init;

@end
