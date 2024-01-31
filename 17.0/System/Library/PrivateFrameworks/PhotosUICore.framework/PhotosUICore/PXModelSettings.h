@interface PXModelSettings : PXSettings

@property (nonatomic) double photoAnalysisGraphInitialGraceDelay;
@property (nonatomic) double photoAnalysisGraphProgressUpdateInterval;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
