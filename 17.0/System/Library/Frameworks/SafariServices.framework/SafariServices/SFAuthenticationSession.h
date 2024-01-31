@class NSString, NSURL, SFAuthenticationViewController;
@protocol _SFAuthenticationSessionDelegate;

@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal> {
    NSURL *_initialURL;
    id /* block */ _completionHandler;
    SFAuthenticationViewController *_authViewController;
    NSString *_callbackURLScheme;
}

@property (weak, nonatomic) id<_SFAuthenticationSessionDelegate> _delegate;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (nonatomic, getter=isSessionStarted) BOOL sessionStarted;
@property (nonatomic) BOOL jitEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)safariViewControllerDidFinish:(id)a0;
- (void)dealloc;
- (BOOL)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (void)safariViewController:(id)a0 didDecideCookieSharingForURL:(id)a1 shouldCancel:(BOOL)a2;
- (id)_authenticationSessionErrorWithCode:(long long)a0;
- (BOOL)_startRequestingFromWebAuthenticationSession:(BOOL)a0 inWindow:(id)a1 dryRun:(BOOL)a2;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 jitEnabled:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)presentingViewControllerForAuthenticationViewController:(id)a0;
- (void)safariViewController:(id)a0 hostApplicationOpenURL:(id)a1;
- (BOOL)startASWebAuthenticationSessionInWindow:(id)a0 dryRun:(BOOL)a1;

@end
