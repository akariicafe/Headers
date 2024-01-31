@class NSString, NSHashTable;

@interface SXMultiScrollViewDelegate : NSObject <TSKScrollViewDelegate, UIScrollViewDelegate>

@property (readonly, nonatomic) NSHashTable *scrollViewDelegates;
@property (readonly, nonatomic) NSHashTable *tskScrollViewDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)addDelegate:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidLayoutSubviews:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)replaceDelegate:(id)a0 withDelegate:(id)a1;
- (BOOL)allowsHorizontalScrollingForScrollView:(id)a0;
- (BOOL)allowsVerticalRubberbandingForScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollView:(id)a0 restrictContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewDidEndSwipe:(id)a0;
- (void)scrollViewWillScroll:(id)a0;

@end
