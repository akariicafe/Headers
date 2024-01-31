@interface PXInlineVideoStabilizationSettings : PXSettings

@property (nonatomic) BOOL useMediaAnalysisRecipe;
@property (nonatomic) BOOL localCacheForMediaAnalysisRecipes;
@property (nonatomic) double allowedCropFraction;
@property (nonatomic) BOOL crossfadeEnabled;
@property (nonatomic) BOOL timeRangeEnabled;
@property (nonatomic) BOOL gyroStabilizationEnabled;
@property (nonatomic) BOOL pixelStabilizationEnabled;
@property (nonatomic) BOOL showDiagnosticUI;
@property (readonly, nonatomic) unsigned long long allowedAnalysisTypes;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (id)parentSettings;
- (void)setDefaultValues;

@end
