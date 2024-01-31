@interface PXStoryMultipartPanoramaSettings : PXSettings

@property (nonatomic) BOOL isFeatureEnabled;
@property (nonatomic) long long maximumNumberOfParts;
@property (nonatomic) long long overlappingTileCount;
@property (nonatomic) double maximumTileSide;
@property (nonatomic) double tileOverlapThreshold;
@property (nonatomic) double productionSimulatedDelay;
@property (nonatomic) double productionReportsTimeInterval;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
