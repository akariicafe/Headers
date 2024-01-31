@class NSString, NSDictionary, WKWebView, UILabel, UIActivityIndicatorView, UINavigationBar;
@protocol ADTransparencyViewControllerDelegate;

@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView *activityIndicator;
}

@property (readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) NSString *transparencyRendererURL;
@property (readonly, nonatomic) BOOL renderingStatusForLocationPermission;
@property (readonly, nonatomic) BOOL renderingStatusForPAPermission;
@property (copy, nonatomic) NSString *transparencyDetails;
@property (retain, nonatomic) NSDictionary *transparencyDetailsData;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) WKWebView *myWebView;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (nonatomic) BOOL isiPad;
@property (retain, nonatomic) id notificationObserver;
@property (retain, nonatomic) id<ADTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredInterfaceOrientationForPresentation;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_commonInit;
- (void)_showErrorMessage:(id)a0;
- (void)errorDelegate;
- (void)_closeViewController:(id)a0;
- (void)_hideErrorMessage;
- (void)_postDismissedNotification;
- (void)_reportTransparencyViewControllerEventWithType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)configureWebView;
- (id)initWithTransparencyDetails:(id)a0;
- (void)prepareRenderingPayload;
- (void)presentViewDelegate;
- (void)renderWebView;
- (void)requestViewWithTransparencyDetails:(id)a0;

@end
