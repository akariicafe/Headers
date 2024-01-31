@class NSString, UIWebView;
@protocol UIScrollViewDelegate;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>

@property (nonatomic) id<UIScrollViewDelegate> delegate;
@property (nonatomic) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
