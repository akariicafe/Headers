@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165;
@property (nonatomic) BOOL shouldWorkAround92398340;
@property (nonatomic) BOOL shouldWorkAround102440195;
@property (nonatomic) BOOL shouldWorkAround104295292;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (long long)version;

@end
