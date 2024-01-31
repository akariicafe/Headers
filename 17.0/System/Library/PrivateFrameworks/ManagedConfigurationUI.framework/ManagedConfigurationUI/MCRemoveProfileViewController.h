@class NSString, UITextField, MCProfile;
@protocol DMCProfileUIDataProvider;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <DMCProfileViewControllerDelegate, DevicePINControllerDelegate>

@property (retain, nonatomic) MCProfile *updatingProfile;
@property (retain, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) id<DMCProfileUIDataProvider> profileUIDataProvider;
@property (nonatomic) BOOL profileWantsToReEnroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (void)profileViewControllerDidSelectPoll:(id)a0;
- (void)profileViewControllerDidSelectRemoveProfile:(id)a0;
- (void)profileViewControllerDidSelectUpdateProfile:(id)a0;
- (BOOL)profileViewControllerHideUpdateProfile:(id)a0;
- (BOOL)profileViewControllerIsProfileInstalled;
- (BOOL)profileViewControllerShouldDisplayPoll:(id)a0;
- (void)_resetWithMode:(int)a0;
- (void)_showLeaveRemoteManagementAlert;
- (void)_didFinishEnteringPINWithCompletion:(id /* block */)a0;
- (void)_leaveRemoteManagementAndErase;
- (id)_mdmProfileRemovalAlertBody;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_showEraseDeviceAlert;
- (void)_showRemovalWarningActionSheet;
- (void)_showRemovalWarningAfterPINVerification;
- (void)_showRemovalWarningAlert;
- (void)_showWrongRemovalPasswordAlert;
- (void)profileRemovalDidFinish;
- (void)setInstallState:(int)a0 animated:(BOOL)a1;
- (void)updateBarButtonItemsForProfileInstallationState:(int)a0 animated:(BOOL)a1;
- (void)updateTitleForProfileInstallationState:(int)a0;

@end
