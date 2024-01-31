@interface AKAutoBugCapture : NSObject

+ (BOOL)shouldCapturePromptBugForContext:(id)a0;
+ (void)triggerAutoBugCaptureWithSubType:(id)a0 andBundleID:(id)a1 userInfo:(id)a2;
+ (id)userInfoFromAccount:(id)a0;
+ (id)userInfoFromContext:(id)a0;

@end
