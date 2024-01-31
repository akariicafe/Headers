@class WKWebView;

@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity {
    WKWebView *_webView;
}

- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
