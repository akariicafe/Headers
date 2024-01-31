@interface TIAssistantSettings : NSObject

+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissDialog;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)launchKeyboardSettings;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDictationPrompt;
+ (void)launchPencilSettings;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDataSharingPrompt;
+ (void)launchDictationSettings;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;

@end
