@class UIWebBrowserView, UIWebViewWebViewDelegate, UIWebPDFViewHandler, UIScrollView, UICheckeredPatternView, NSURLRequest;
@protocol UIWebViewDelegate;

@interface UIWebViewInternal : NSObject {
    UIScrollView *scroller;
    UIWebBrowserView *browserView;
    UICheckeredPatternView *checkeredPatternView;
    id<UIWebViewDelegate> delegate;
    unsigned char scalesPageToFit : 1;
    unsigned char isLoading : 1;
    unsigned char hasOverriddenOrientationChangeEventHandling : 1;
    unsigned char drawsCheckeredPattern : 1;
    unsigned char selectionEnabled : 1;
    unsigned char drawInWebThread : 1;
    unsigned char inRotation : 1;
    unsigned char didRotateEnclosingScrollView : 1;
    unsigned char safeAreaShouldAffectObscuredInsets : 1;
    NSURLRequest *request;
    long long clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
    UIWebPDFViewHandler *pdfHandler;
}

@end
