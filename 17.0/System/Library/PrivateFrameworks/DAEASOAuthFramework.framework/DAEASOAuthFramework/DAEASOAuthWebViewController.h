@class NSExtension, NSString, NSError, ACAccount, ACAccountStore, UIViewController;

@interface DAEASOAuthWebViewController : UIViewController <UIWebViewDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id /* block */ _presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    BOOL _extensionRequestDidComplete;
    NSString *_authURI;
    unsigned long long _oauthType;
    BOOL _isFirstTimeSetup;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentInternetOfflineError;
+ (void)presentUsernameMismatchAlert;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_didInstantiateRemoteViewController;
- (void)_dismissAndCompleteWithIdentity:(id)a0 error:(id)a1 extensionCompletion:(id /* block */)a2;
- (void)_extensionRequestDidCancelWithError:(id)a0;
- (void)_extensionRequestDidCompleteWithTokens:(id)a0 extensionCompletion:(id /* block */)a1;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;
- (void)_commonInitializationWithAccount:(id)a0 accountStore:(id)a1 username:(id)a2 accountDescription:(id)a3 presentationBlock:(id /* block */)a4;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 authURI:(id)a2 accountType:(unsigned long long)a3 userName:(id)a4 accountDescription:(id)a5 isFirstTimeSetup:(BOOL)a6 presentationBlock:(id /* block */)a7;

@end
