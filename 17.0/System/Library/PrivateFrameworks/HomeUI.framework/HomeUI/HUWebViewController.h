@class NAFuture, NSString, NSURL, HMHTMLDocument, WKWebView;

@interface HUWebViewController : UIViewController <WKNavigationDelegate, HUPreloadableViewController>

@property (readonly, nonatomic) NAFuture *loadingFuture;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) HMHTMLDocument *document;
@property (readonly, nonatomic) WKWebView *webView;
@property (nonatomic) BOOL showsShareButton;
@property (nonatomic) BOOL zoomEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)initWithURL:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_share:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (id)_initWithDocument:(id)a0 orMaybeAURL:(id)a1;
- (BOOL)_shouldShare;
- (void)_startLoadWithDocument:(id)a0 orMaybeAURL:(id)a1;
- (id)hu_preloadContent;

@end
