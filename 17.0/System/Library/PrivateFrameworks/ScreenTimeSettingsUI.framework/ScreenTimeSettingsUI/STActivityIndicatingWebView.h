@class NSString, UIActivityIndicatorView;
@protocol UITraitChangeRegistration;

@interface STActivityIndicatingWebView : WKWebView <WKNavigationDelegate>

@property (retain, nonatomic) UIActivityIndicatorView *activityView;
@property (retain, nonatomic) id<UITraitChangeRegistration> interfaceStyleObservation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)didMoveToSuperview;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)didChangeUserInterfaceStyle;
- (void)hostActivityIndicatorInView:(id)a0;

@end
