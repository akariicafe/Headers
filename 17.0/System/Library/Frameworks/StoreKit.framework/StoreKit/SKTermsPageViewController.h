@class NSString, UIToolbar, WKWebView, UINavigationBar;
@protocol SKTermsPageViewControllerDelegate;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate> {
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    WKWebView *_webview;
}

@property (weak, nonatomic) id<SKTermsPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (long long)positionForBar:(id)a0;
- (void)_dismissViewController;
- (unsigned long long)edgesForExtendedLayout;
- (void)_buttonDecline:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_buttonAccept:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0 withAcceptance:(BOOL)a1;
- (void)_loadSubviews;
- (id)_markupTermsWithHTML:(id)a0;
- (id)initWithTerms:(id)a0;

@end
