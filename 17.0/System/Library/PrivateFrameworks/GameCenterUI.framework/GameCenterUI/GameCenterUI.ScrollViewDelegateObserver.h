@interface GameCenterUI.ScrollViewDelegateObserver : NSObject <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ compoundScrollObserver;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;

@end
