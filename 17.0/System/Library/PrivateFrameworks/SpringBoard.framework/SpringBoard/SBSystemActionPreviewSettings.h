@interface SBSystemActionPreviewSettings : PTSettings

@property (nonatomic) double minimumPreviewInterval;
@property (nonatomic) double additionalUrgencyInterval;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
