@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {
    BOOL _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)presentSheet;
- (void)_disableWebView;
- (void)_enableWebView;
- (void)doneWithSheet;
- (id)initWithUIWebDocumentView:(id)a0;

@end
