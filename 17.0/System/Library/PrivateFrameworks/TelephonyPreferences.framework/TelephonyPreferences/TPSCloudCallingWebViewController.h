@class UIWebView, UIActivityIndicatorView, NSURL, NSData, NSString;

@interface TPSCloudCallingWebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic) long long type;
@property (readonly, retain, nonatomic) UIWebView *webView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *body;
@property (readonly, nonatomic, getter=isPresentingURL) BOOL presentingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)uiWebView:(id)a0 didClearWindowObject:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)_cancelButtonClicked:(id)a0;
- (void)cancelWebView;
- (void)doProvisioningCanceled;
- (void)doProvisioningDone;
- (void)doProvisioningFailed;
- (void)doWebViewTimedOut;
- (void)loadURL:(id)a0 body:(id)a1 completion:(id /* block */)a2;
- (void)loadWebViewWithSpinner:(id /* block */)a0;
- (void)setupControllerInWebFrame:(id)a0;

@end
