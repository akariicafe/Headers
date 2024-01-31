@class NSData, NSString, UIWebView;

@interface PSWebContainerView : UIView <UIWebViewDelegate>

@property (readonly, nonatomic) UIWebView *webView;
@property (retain, nonatomic) NSData *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)a0;
- (BOOL)uiWebView:(id)a0 previewIsAllowedForPosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (double)heightForWidth:(double)a0;

@end
