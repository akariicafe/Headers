@class NSString;

@interface TeaUI.MultiScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ respondsToSelectorCache;
    void /* unknown type, empty encoding */ delegates;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
