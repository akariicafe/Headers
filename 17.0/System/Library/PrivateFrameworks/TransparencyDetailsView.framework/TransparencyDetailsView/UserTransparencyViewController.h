@class NSString, UIActivityIndicatorView, WKWebView, UILabel, ADUserTransparencyResponse, UINavigationBar;
@protocol UserTransparencyViewControllerDelegate;

@interface UserTransparencyViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView *activityIndicator;
}

@property (copy, nonatomic) NSString *userTransparencyDetails;
@property (retain, nonatomic) ADUserTransparencyResponse *userTransparencyResponseData;
@property (retain, nonatomic) NSString *userTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *userTransparencyRendererPayload;
@property (retain, nonatomic) NSString *userTransparencyRendererURL;
@property (readonly, nonatomic) BOOL renderingStatusForPAPermission;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (retain, nonatomic) WKWebView *myUserPrivacyWebView;
@property (nonatomic) BOOL isiPad;
@property (retain, nonatomic) id<UserTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_showErrorMessage:(id)a0;
- (void)errorDelegate;
- (id)initWithUserTransparencyDetails:(id)a0;
- (void)loadWebView;
- (void)_closeViewController:(id)a0;
- (void)_hideErrorMessage;
- (void)_reportUserTransparencyViewControllerEventWithType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)immediatelyLoadViewControllerBeforeNetworkRequest;
- (id)normalizeChineseLanguage:(id)a0;
- (void)presentViewDelegate;
- (void)requestUserTransparencyDetailsWithCompletionHandler:(id /* block */)a0;

@end
