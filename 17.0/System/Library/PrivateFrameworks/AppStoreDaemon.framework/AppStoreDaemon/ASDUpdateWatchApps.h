@interface ASDUpdateWatchApps : NSObject

+ (BOOL)shouldPromptBeforeUpdating;
+ (void)shouldPromptBeforeUpdatingWithResultHandler:(id /* block */)a0;
+ (BOOL)updateBundleIDs:(id)a0 userInitiated:(BOOL)a1 error:(id *)a2;
+ (void)updateBundleIDs:(id)a0 userInitiated:(BOOL)a1 withResultHandler:(id /* block */)a2;

@end
