@class NSString;

@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    void *_scrollingTreeNodeDelegate;
}

@property (nonatomic, getter=_isInUserInteraction) BOOL inUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)cancelPointersForGestureRecognizer:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)_actingParentScrollViewForScrollView:(id)a0;
- (void)_scrollView:(id)a0 asynchronouslyHandleScrollEvent:(id)a1 completion:(id /* block */)a2;
- (id)initWithScrollingTreeNodeDelegate:(void *)a0;

@end
