@class NSString, WKWebView, NSURL;
@protocol LoadingControllerDelegate;

@interface LoadingController : NSObject {
    NSURL *_URL;
    NSString *_title;
}

@property (retain, nonatomic) WKWebView *webView;
@property (nonatomic) float estimatedProgress;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL canGoForward;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *titleForStatePersisting;
@property (readonly, nonatomic) NSURL *URLForStatePersisting;
@property (weak, nonatomic) id<LoadingControllerDelegate> delegate;

- (void)stopLoading;
- (void)goForward;
- (id)loadRequest:(id)a0 userDriven:(BOOL)a1;
- (id)loadRequest:(id)a0 userDriven:(BOOL)a1 shouldOpenExternalURLs:(BOOL)a2;
- (void)goBack;
- (void).cxx_destruct;
- (id)loadRequest:(id)a0 userDriven:(BOOL)a1 shouldOpenExternalURLs:(BOOL)a2 eventAttribution:(id)a3;
- (void)reloadFromOrigin:(BOOL)a0;

@end
