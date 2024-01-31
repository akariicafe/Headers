@class SBFFluidBehaviorSettings;

@interface SBSAInterfaceElementTransitionSettings : SBSystemApertureTransitionSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *centerBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *boundsBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *alphaBehaviorSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *backgroundColorBehaviorSettings;

+ (id)_childSettingsKeyPathsToTitles;

- (void).cxx_destruct;

@end
