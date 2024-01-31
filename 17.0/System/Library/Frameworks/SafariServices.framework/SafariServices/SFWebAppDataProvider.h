@class UIWebClip, UINavigationController, UIViewController, WBSApplicationManifestFetcher, _SFInjectedJavaScriptController, UIColor, NSString, _SFWebClipViewController, _WKApplicationManifest, _SFWebClipMetadataFetcher, WKWebView, NSArray, UIImage;
@protocol SFWebAppDataProviderDelegate;

@interface SFWebAppDataProvider : NSObject <WebClipDelegate, _SFWebClipViewControllerDelegate, WKNavigationDelegate> {
    UINavigationController *_wrappingNavigationController;
    _SFWebClipViewController *_webClipViewController;
    UIWebClip *_webClip;
    BOOL _webClipConfigured;
    BOOL _waitingForSnapshot;
    _WKApplicationManifest *_manifest;
    UIImage *_bestManifestIcon;
    NSArray *_manifestIcons;
    WKWebView *_webView;
    WBSApplicationManifestFetcher *_applicationManifestFetcher;
    UIImage *_touchIcon;
    BOOL _touchIconPrecomposed;
    _SFInjectedJavaScriptController *_activityJSController;
    _SFWebClipMetadataFetcher *_webClipMetadataFetcher;
    UIColor *_pageThemeColor;
    UIColor *_underPageBackgroundColor;
}

@property (readonly, nonatomic) UIViewController *activityViewController;
@property (weak, nonatomic) id<SFWebAppDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)webClip:(id)a0 iconRequestDidFinishWithImage:(id)a1 precomposed:(BOOL)a2;
- (void)webClip:(id)a0 startupImageRequestDidFinishWithImage:(id)a1;
- (void)webClip:(id)a0 startupLandscapeImageRequestDidFinishWithImage:(id)a1;
- (void)prepareWithURL:(id)a0;
- (void)_createWebClipFromWebView;
- (void)_createWebView;
- (void)_downloadManifestIconWithCompletionHandler:(id /* block */)a0;
- (void)_finishPreparingFromWebView;
- (BOOL)_isWhiteColor:(id)a0;
- (void)_updateManifestValues;
- (void)_updateMonogramIconForWebClip;
- (void)prepareWithManifestData:(id)a0;
- (void)setContentReadyForDisplay;
- (void)updateWithWebClipMetadata:(id)a0;
- (void)webClipViewController:(id)a0 didFinishWithResult:(BOOL)a1;

@end
