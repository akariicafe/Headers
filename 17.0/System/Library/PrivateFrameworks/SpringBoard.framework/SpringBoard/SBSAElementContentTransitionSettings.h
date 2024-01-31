@class SBFFluidBehaviorSettings;

@interface SBSAElementContentTransitionSettings : SBSystemApertureTransitionSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *sensorObscuringShadowBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *subcomponentBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *customContentBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *snapshotBehaviorSettings;

+ (id)_childSettingsKeyPathsToTitles;

- (void).cxx_destruct;

@end
