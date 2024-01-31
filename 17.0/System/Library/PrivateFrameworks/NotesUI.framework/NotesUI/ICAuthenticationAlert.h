@class NSString;

@interface ICAuthenticationAlert : NSObject

@property (nonatomic) BOOL prefersSheet;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic) BOOL actionIsDestructive;
@property (copy, nonatomic) NSString *dismissTitle;
@property (copy, nonatomic) id /* block */ shouldPresentHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly, nonatomic) BOOL shouldPresent;

+ (id)customPasswordConfirmationAlert;
+ (id)aboutLockedNotesInfoAlert;
+ (id)cannotAddAttachmentsInfoAlertWithAttachmentCount:(unsigned long long)a0;
+ (id)cannotLockInfoAlertWithReason:(unsigned long long)a0;
+ (id)cannotSetCustomPasswordInfoAlert;
+ (id)cannotUnlockInfoAlert;
+ (id)customAccountNameForAccount:(id)a0;
+ (id)devicePasswordIncompatibleConfirmationAlertWithAccount:(id)a0 incompatibilityMessage:(id)a1;
+ (id)enableBiometricsActionAlertShownKeyWithAccount:(id)a0;
+ (id)enableBiometricsActionAlertWithAccount:(id)a0;
+ (id)enableKeychainActionAlert;
+ (id)forgotCustomPasswordSwitchAnywayConfirmationAlert;
+ (id)incorrectCustomPasswordInfoAlertWithObject:(id)a0 showHint:(BOOL)a1;
+ (void)markSwitchToDevicePasswordPromptPresentedForAccount:(id)a0;
+ (id)messageForPreventLockReason:(unsigned long long)a0;
+ (id)mismatchedCustomPasswordInfoAlert;
+ (id)missingCustomPasswordInfoAlert;
+ (void)presentAlertsIfNeeded:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
+ (id)rememberCustomPasswordInfoAlertPresentedKeyForAccount:(id)a0;
+ (id)rememberCustomPasswordInfoAlertWithAccount:(id)a0;
+ (id)resetCustomPasswordConfirmationAlertWithAccount:(id)a0;
+ (id)resetCustomPasswordInfoAlertWithAccount:(id)a0;
+ (void)resetPresentationsForAccount:(id)a0;
+ (id)setDevicePasswordActionAlert;
+ (id)setDevicePasswordInfoAlert;
+ (BOOL)shouldPresentSwitchToDevicePasswordPromptForAccount:(id)a0;
+ (id)signIntoCloudAccountActionAlertWithAccount:(id)a0;
+ (id)switchToDevicePasswordInSettingsInfoAlertWithAccount:(id)a0;
+ (id)switchToDevicePasswordPromptPresentedCountKeyForAccount:(id)a0;
+ (id)switchedModeInfoAlertWithAccount:(id)a0;
+ (id)switchedToCustomPasswordModeInfoAlertWithAccount:(id)a0;
+ (id)switchedToDevicePasswordModeInfoAlertWithAccount:(id)a0;
+ (id)updateDivergedCustomPasswordModeActionAlertWithAccount:(id)a0 incompatibilityMessage:(id)a1;
+ (id)updateDivergedCustomPasswordNotesActionAlertWithObject:(id)a0;
+ (id)updateDivergedDevicePasswordModeActionAlertWithAccount:(id)a0;
+ (id)upgradeToLockNotesInfoAlert;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)presentInWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
