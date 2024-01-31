@class NSString;

@interface WebDefaultUIDelegate : NSObject <WebUIDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUIDelegate;

- (void)webViewUnfocus:(id)a0;
- (void)webView:(id)a0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)a1 totalSpaceNeeded:(unsigned long long)a2;
- (void)webView:(id)a0 makeFirstResponder:(id)a1;
- (void)webView:(id)a0 mouseDidMoveOverElement:(id)a1 modifierFlags:(unsigned long long)a2;
- (void)webView:(id)a0 printFrameView:(id)a1;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2;
- (BOOL)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2;
- (id)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3;
- (void)webView:(id)a0 runOpenPanelForFileButtonWithResultListener:(id)a1;
- (void)webView:(id)a0 setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)webView:(id)a0 setResizable:(BOOL)a1;
- (void)webView:(id)a0 setStatusBarVisible:(BOOL)a1;
- (void)webView:(id)a0 setStatusText:(id)a1;
- (void)webView:(id)a0 setToolbarsVisible:(BOOL)a1;
- (BOOL)webViewAreToolbarsVisible:(id)a0;
- (void)webViewClose:(id)a0;
- (id)webViewFirstResponder:(id)a0;
- (void)webViewFocus:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })webViewFrame:(id)a0;
- (BOOL)webViewIsResizable:(id)a0;
- (BOOL)webViewIsStatusBarVisible:(id)a0;
- (void)webViewShow:(id)a0;
- (id)webViewStatusText:(id)a0;
- (void)webViewSupportedOrientationsUpdated:(id)a0;
- (id)webView:(id)a0 createWebViewWithRequest:(id)a1 userGesture:(BOOL)a2;
- (id)webView:(id)a0 createWebViewWithRequest:(id)a1 windowFeatures:(id)a2;
- (void)webView:(id)a0 didDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)webView:(id)a0 didScrollDocumentInFrameView:(id)a1;
- (unsigned long long)webView:(id)a0 dragDestinationActionMaskForSession:(id)a1;

@end
