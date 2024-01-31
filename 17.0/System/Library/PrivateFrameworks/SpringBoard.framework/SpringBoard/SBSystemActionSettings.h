@class SBSystemActionCoachingSettings, SBSystemActionPreviewSettings;

@interface SBSystemActionSettings : PTSettings

@property (readonly, nonatomic) SBSystemActionPreviewSettings *previewSettings;
@property (readonly, nonatomic) SBSystemActionCoachingSettings *coachingSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
