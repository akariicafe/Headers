@class NSTimer, NSString, WBSSecIdentitiesCache, NSURL, UINavigationController, _WKRemoteObjectInterface, WBSCertificateWarningPageContext, NSURLRequest, NSURLProtectionSpace, WKWebView;
@protocol WBSCertificateWarningPagePresenter, _SFPageLoadErrorControllerDelegate, SFDialogPresenting;

@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler> {
    BOOL _reloadAfterResume;
    WKWebView *_webView;
    NSTimer *_crashCountResetTimer;
    WBSSecIdentitiesCache *_secIdentitiesCache;
    struct __SecTrust { } *_certificateTrust;
    WBSCertificateWarningPageContext *_legacyTLSWarningPageContext;
    id<WBSCertificateWarningPagePresenter> _certificateWarningPagePresenterProxy;
    _WKRemoteObjectInterface *_certificateWarningPageHandlerInterface;
    BOOL _certificateWarningPageHandlerInterfaceInvalidated;
    id /* block */ _certificateRecoveryAttempter;
    NSURL *_certificateFailingURL;
    NSURL *_clickThroughURL;
    UINavigationController *_certificateNavigationViewController;
}

@property (weak, nonatomic) id<_SFPageLoadErrorControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL reloadingFailedRequest;
@property (readonly, nonatomic) NSURLRequest *failedRequest;
@property (readonly, nonatomic) unsigned long long crashesSinceLastSuccessfulLoad;
@property (weak, nonatomic) id<SFDialogPresenting> dialogPresenter;
@property (retain, nonatomic) NSURLProtectionSpace *protectionSpaceForInvalidCertificateBypass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearOldCertificateBypasses;

- (void)visitWebsiteWithoutPrivateRelay;
- (id)initWithWebView:(id)a0;
- (void)performAction:(int)a0 forAlert:(id)a1;
- (void)_clearCertificateWarningPageHandlerInterface;
- (void)dealloc;
- (void)handleFrameLoadError:(id)a0;
- (void)clearCrashCountResetTimer;
- (void)_handleFrameLoadError:(id)a0 forURL:(id)a1 recoveryAttempter:(id /* block */)a2;
- (void)_setFailedRequest:(id)a0;
- (void)_loadCertificateWarningPageForContext:(id)a0;
- (void)openClockSettings;
- (void)addDisallowedFileURLAlert;
- (void)_resetCrashCountSoon;
- (void)_fetchSpecializedMessageForError:(id)a0 URL:(id)a1 completionHandler:(id /* block */)a2;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)invalidate;
- (void)_setUpCertificateWarningPageHandlerInterface;
- (void)_cacheSecIdentityIfNeeded:(struct __SecIdentity { } *)a0 forIdentityDomain:(id)a1;
- (void)handleSubframeCertificateError:(id)a0;
- (void)goBackButtonClicked;
- (BOOL)updateCrashesAndShowCrashError:(id)a0 URLString:(id)a1;
- (void)addFormAlertWithTitle:(id)a0 decisionHandler:(id /* block */)a1;
- (void)showErrorPageWithTitle:(id)a0 bodyText:(id)a1 learnMoreLink:(id)a2 forError:(id)a3;
- (void)scheduleResetCrashCount;
- (void)webViewDidCommitErrorPagePreview:(id)a0;
- (void)addAlertWithTitle:(id)a0 bodyText:(id)a1;
- (void)showCertificateInformation;
- (void)_handleCertificateError:(id)a0 forURL:(id)a1 isMainFrame:(BOOL)a2 recoveryAttempter:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)showErrorPageWithTitle:(id)a0 bodyText:(id)a1 forError:(id)a2;
- (void)_resetCrashCount:(id)a0;
- (void)_dismissCertificateViewButtonTapped;
- (id)_genericMessageForError:(id)a0;
- (void).cxx_destruct;
- (void)clearFailedRequest;
- (void)handleClientCertificateAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)_showRepeatedWebProcessCrashError:(id)a0 URLString:(id)a1;
- (void)handleLegacyTLSWithFailingURL:(id)a0 clickThroughURL:(id)a1 authenticationChallenge:(id)a2;
- (void)_continueWithoutCredentialsUsingAlertContext:(id)a0;
- (void)addInvalidProfileAlert;
- (void)reloadAfterError;
- (void)addInvalidURLAlert;
- (void)addDialog:(id)a0;
- (id)_certificateWarningPagePresenterProxy;
- (id)_errorMessageForNSURLErrorDomain:(id)a0 url:(id)a1;
- (void)addDownloadFailedAlertWithDescription:(id)a0;
- (id)_firstItemWithUniqueURLInBackListFromURL:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (void)addDisallowedUseOfJavaScriptAlert;
- (void)_continueAfterCertificateAlertWithURL:(id)a0 trust:(struct __SecTrust { } *)a1 recoveryAttempter:(id /* block */)a2;
- (void)addAlert:(id)a0;
- (id)_titleForError:(id)a0;
- (void)visitInsecureWebsite;

@end
