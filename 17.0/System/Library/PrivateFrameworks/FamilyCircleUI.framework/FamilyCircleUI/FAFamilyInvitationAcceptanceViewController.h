@class NSString, AAUIRemoteUIController, FAFamilyInvite, NSOperationQueue, AAGrandSlamSigner, ACAccount, NSMutableURLRequest, ACAccountStore;
@protocol FAInvitationAcceptanceDelegate;

@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    FAFamilyInvite *_invite;
    AAUIRemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

@property (weak, nonatomic) id<FAInvitationAcceptanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (id)_createCancelButton;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 willLoadRequest:(id)a1;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)_cancelButtonWasTapped:(id)a0;
- (void)_sendUserToiTunesSettings;
- (void)_showErrorAlert;
- (void)_loadiTunesLinkingRemoteUI;
- (void)confirmIdentityViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (id)initWithInvite:(id)a0 appleAccount:(id)a1 grandSlamSigner:(id)a2;

@end
