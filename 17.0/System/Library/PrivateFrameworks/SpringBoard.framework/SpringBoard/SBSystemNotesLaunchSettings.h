@class NSString;

@interface SBSystemNotesLaunchSettings : PTSettings

@property (copy, nonatomic) NSString *applicationBundleID;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
