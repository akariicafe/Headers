@interface SBVoiceDisabledBundles : NSObject

+ (BOOL)voiceControlDisabledByCurrentlyRunningApp;
+ (void)setAppDisabledVoiceControl:(BOOL)a0 bundleIdentifier:(id)a1;

@end
