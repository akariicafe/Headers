@interface ScreenTimeSettingsUI.STIntroductionViewControllersFactory : NSObject

+ (BOOL)isOfTypeDowntimeViewController:(id)a0;
+ (BOOL)isOfTypeAppAndWebsiteActivityViewController:(id)a0;
+ (BOOL)isOfTypeCommunicationSafetyViewController:(id)a0;
+ (BOOL)isOfTypePresetsViewController:(id)a0;
+ (BOOL)isOfTypeWelcomeViewController:(id)a0;
+ (id)makeIntroPresetsViewControllerWithIntroductionModel:(id)a0 settingsPresetViewModel:(id)a1 name:(id)a2 updateExistingSettings:(BOOL)a3 continueHandler:(id /* block */)a4;
+ (id)makeIntroductionAppAndWebsiteActivityViewControllerWithIntroductionModel:(id)a0 childName:(id)a1 continueHandler:(id /* block */)a2;
+ (id)makeIntroductionCommunicationSafetyViewControllerWithIntroductionModel:(id)a0 childName:(id)a1 continueHandler:(id /* block */)a2;
+ (id)makeIntroductionDowntimeViewControllerWithIntroductionModel:(id)a0 continueHandler:(id /* block */)a1;
+ (id)makeIntroductionPasscodeViewControllerWithIntroductionModel:(id)a0 askForRecoveryForAppleID:(BOOL)a1 altDSID:(id)a2 userURI:(id)a3 isChildOrNotSignedIntoiCloud:(BOOL)a4 continueHandler:(id /* block */)a5;
+ (id)makeIntroductionWelcomeViewControllerWithChildName:(id)a0 forceParentalControls:(BOOL)a1 continueHandler:(id /* block */)a2 endHandler:(id /* block */)a3;

- (id)init;

@end
