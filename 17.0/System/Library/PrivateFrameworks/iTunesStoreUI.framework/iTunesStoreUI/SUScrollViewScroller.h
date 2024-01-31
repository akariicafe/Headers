@class NSString, UIScrollView, NSObject, NSMutableArray;
@protocol UIScrollViewDelegate;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate> {
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
}

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_addScrollRequest:(id)a0;
- (void)_finishActiveScrollRequest;
- (void)_performContentOffsetRequest:(id)a0;
- (void)_performNextScrollRequest;
- (void)_performScrollRectRequest:(id)a0;
- (void)attachToScrollView:(id)a0;
- (void)detachFromScrollView;
- (void)scrollFrameToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
