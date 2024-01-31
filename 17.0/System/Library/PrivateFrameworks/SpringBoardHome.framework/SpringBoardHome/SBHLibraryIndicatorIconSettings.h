@class SBFFluidBehaviorSettings;

@interface SBHLibraryIndicatorIconSettings : PTSettings

@property (nonatomic) double pod1Scale;
@property (nonatomic) double pod2Scale;
@property (nonatomic) double pod3Scale;
@property (retain, nonatomic) SBFFluidBehaviorSettings *pod1AnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *pod2AnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *pod3AnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
