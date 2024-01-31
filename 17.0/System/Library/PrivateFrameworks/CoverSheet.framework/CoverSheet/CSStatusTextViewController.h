@class SBFRemoteBasebandLoggingManager, NSString, SBLockScreenDefaults, MCProfileConnection, CSStatusTextView;
@protocol CSStatusTextViewControllerDelegate;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver> {
    CSStatusTextView *_view;
    NSString *_tribecaText;
    MCProfileConnection *_profileConnection;
    SBFRemoteBasebandLoggingManager *_basebandLoggingManager;
    SBLockScreenDefaults *_lockScreenDefaults;
    int _activationLockNotifyToken;
}

@property (weak, nonatomic) id<CSStatusTextViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *overrideFooterText;

- (void)remoteBasebandLogCollectionStateDidChange:(BOOL)a0;
- (id)_legalString;
- (void)setTribecaText:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateText;
- (void)dealloc;
- (id)statusTextView;
- (void)_updateTextForProvisionalEnrollment;
- (BOOL)_isSecurityResearchDevice;
- (void)loadView;
- (void)_updateTribecaText;
- (void)_updateTextForProfiles;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)_legalContact;
- (void)_updateTextForLegal;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateTextForDeviceInformation;
- (void)_profileStateChangedNotification:(id)a0;
- (void)_updateTextForSupervision;

@end
