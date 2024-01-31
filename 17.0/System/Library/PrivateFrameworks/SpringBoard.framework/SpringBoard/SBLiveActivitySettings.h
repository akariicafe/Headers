@class SBAmbientLiveActivitiesSettings;

@interface SBLiveActivitySettings : PTSettings

@property (nonatomic) BOOL allowAlertsOnHostApp;
@property (nonatomic) BOOL hideActivitiesInLockScreen;
@property (nonatomic) BOOL hideActivitiesInDynamicIsland;
@property (nonatomic) BOOL hideActivitiesInAmbient;
@property (nonatomic) BOOL disableActivityAlertsAsBanners;
@property (retain, nonatomic) SBAmbientLiveActivitiesSettings *ambientSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
