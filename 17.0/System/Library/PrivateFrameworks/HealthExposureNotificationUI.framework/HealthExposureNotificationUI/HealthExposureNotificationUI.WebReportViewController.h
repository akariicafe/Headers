@interface HealthExposureNotificationUI.WebReportViewController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler> {
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_webView;
    void /* unknown type, empty encoding */ statusView;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL shouldAutorotate;

- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapCancel;
- (void)didTapDone;
- (id)initWithAgencyModel:(id)a0;

@end
