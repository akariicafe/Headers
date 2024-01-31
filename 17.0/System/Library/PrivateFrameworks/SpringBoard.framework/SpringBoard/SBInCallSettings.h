@class SBFFluidBehaviorSettings;

@interface SBInCallSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeInSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeOutSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
