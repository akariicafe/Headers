@class NSArray, FBSSceneSettingsDiff, BSAnimationSettings;

@interface PRPosterTransition : NSObject

@property (nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) unsigned long long significantEvent;
@property (nonatomic) BOOL contentSignificantlyChanged;
@property (retain, nonatomic) BSAnimationSettings *animationSettings;

- (void).cxx_destruct;
- (BOOL)fromWakeTimer;

@end
