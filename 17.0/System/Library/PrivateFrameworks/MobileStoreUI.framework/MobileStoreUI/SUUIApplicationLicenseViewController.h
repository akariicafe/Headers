@class UIWebView, NSURL, SUUIApplicationLicensePage, SSVLoadURLOperation;

@interface SUUIApplicationLicenseViewController : SUUIViewController {
    SUUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)reloadData;
- (void)loadView;
- (void).cxx_destruct;
- (void)_displayPage:(id)a0 error:(id)a1;
- (id)initWithLicenseAgreementPage:(id)a0;
- (id)initWithLicenseAgreementURL:(id)a0;

@end
