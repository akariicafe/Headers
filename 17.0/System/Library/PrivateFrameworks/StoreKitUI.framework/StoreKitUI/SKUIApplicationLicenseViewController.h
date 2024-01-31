@class SKUIApplicationLicensePage, NSURL, WKWebView, SSVLoadURLOperation;

@interface SKUIApplicationLicenseViewController : SKUIViewController {
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    WKWebView *_webView;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)reloadData;
- (void)loadView;
- (void).cxx_destruct;
- (void)_displayPage:(id)a0 error:(id)a1;
- (id)initWithLicenseAgreementPage:(id)a0;
- (id)initWithLicenseAgreementURL:(id)a0;

@end
