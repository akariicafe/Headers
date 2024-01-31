@class WBSAppLink, _SFLinkPreviewHeader, NSString, NSURL, _WKActivatedElementInfo, WKWebView, UIViewController;
@protocol _SFLinkPreviewHandler;

@interface _SFLinkPreviewHelper : NSObject <_SFAdaptivePreviewViewControllerDelegate> {
    WBSAppLink *_appLink;
    UIViewController *_cachedPreviewViewController;
    NSURL *_fallbackURL;
    id<_SFLinkPreviewHandler> _handler;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowBounds;
}

@property (readonly, nonatomic) _WKActivatedElementInfo *elementInfo;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) UIViewController *previewContentViewController;
@property (weak, nonatomic) _SFLinkPreviewHeader *activeLinkPreviewHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)commitPreviewViewController:(id)a0;
+ (void)initialize;
+ (id)contextMenuConfigurationForWebView:(id)a0 elementInfo:(id)a1 handler:(id)a2;
+ (id)contextMenuContentPreviewForWebView:(id)a0 elementInfo:(id)a1 handler:(id)a2;
+ (void)invalidateLinkPreviewHelperForWebView:(id)a0;
+ (id)linkPreviewHelperForWebView:(id)a0;
+ (id)previewViewControllerWebView:(id)a0 windowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 url:(id)a2 handler:(id)a3;

- (void)dealloc;
- (id)previewViewControllerForURL:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)previewViewController;
- (void)openURL:(id)a0 forAction:(long long)a1 withTabOrder:(long long)a2;
- (BOOL)_previewViewControllerIsLinkPreview;
- (id)adaptivePreviewViewController:(id)a0 requestLinkPreviewViewControllerWithURL:(id)a1;
- (void)adaptivePreviewViewControllerWillDisableLinkPreview:(id)a0;
- (id)addToReadingListActionForURL:(id)a0;
- (void)commitPreviewViewController;
- (id)downloadActionForURL:(id)a0;
- (double)headerViewHeightForAdaptivePreviewViewController:(id)a0;
- (id)initWithWebView:(id)a0 windowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 elementInfo:(id)a2 orURL:(id)a3 handler:(id)a4;
- (void)invalidateElementInfo;
- (id)makeContextMenuConfiguration;
- (id)makePreviewViewController;
- (id)menuElementsForSuggestedActions:(id)a0;
- (id)menuWithSuggestedActions:(id)a0;
- (id)openActionForAlternateURL:(id)a0;
- (id)openActionForRedirectToExternalNavigationResult:(id)a0;
- (id)openActionForSettingUpOneTimeCodeGeneratorWithExternalNavigationResult:(id)a0;
- (id)openInNewTabActionForURL:(id)a0 preActionHandler:(id /* block */)a1;
- (id)openInNewWindowActionForURL:(id)a0;
- (id)openInTabGroupActionForURL:(id)a0 shouldPerformActionHandler:(id /* block */)a1;

@end
