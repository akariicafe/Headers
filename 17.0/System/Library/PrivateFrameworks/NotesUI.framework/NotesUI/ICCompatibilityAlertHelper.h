@interface ICCompatibilityAlertHelper : NSObject

+ (id)oneTimeAlertKeyForAccount:(id)a0;
+ (void)showAttachmentCompatibilityAlertInAccountIfNeeded:(id)a0 parentViewController:(id)a1 completion:(id /* block */)a2;
+ (void)showCompatibilityAlertForAccountIfNeeded:(id)a0 title:(id)a1 alertMessage:(id)a2 defaultButtonTitle:(id)a3 secondaryButtonTitle:(id)a4 postscript:(id)a5 parentViewController:(id)a6 hasShownAlertKey:(id)a7 minimumNotesVersion:(long long)a8 completion:(id /* block */)a9;
+ (void)showCompatibilityAlertForInlineAttachmentsInAccountIfNeeded:(id)a0 parentViewController:(id)a1 completion:(id /* block */)a2;
+ (void)showCompatibilityAlertWithDeviceMessage:(id)a0 title:(id)a1 alertMessage:(id)a2 defaultButtonTitle:(id)a3 secondaryButtonTitle:(id)a4 postscript:(id)a5 parentViewController:(id)a6 completion:(id /* block */)a7;
+ (void)suppressOneTimeAttachmentUpgradeAlertForAcccount:(id)a0;

@end
