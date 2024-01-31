@class NSString, WKWebView;

@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSString *releaseNotes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)init;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;

@end
