@class NSString, PKRemoteTransactionAuthenticationPasscodeViewController, _UIAsyncInvocation, NSData;
@protocol PKTransactionAuthenticationPasscodeViewControllerDelegate;

@interface PKTransactionAuthenticationPasscodeViewController : UIViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> {
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteTransactionAuthenticationPasscodeViewController *_remoteVC;
    id<PKTransactionAuthenticationPasscodeViewControllerDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
    NSData *_archivedAnalyticsSessionToken;
}

@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) NSString *transactionIdentifier;
@property (weak, nonatomic) id<PKTransactionAuthenticationPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)init;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)passcodeViewControllerDidCancel;
- (void)_setRemoteVC:(id)a0 completion:(id /* block */)a1;
- (id)initWithPassUniqueIdentifier:(id)a0 transactionIdentifier:(id)a1 archivedAnalyticsSessionToken:(id)a2;
- (void)passcodeViewControllerDidEndSessionExchange;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)a0;
- (void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(id /* block */)a0;
- (void)resetWithTransactionAuthenticationFailure:(long long)a0 completion:(id /* block */)a1;

@end
