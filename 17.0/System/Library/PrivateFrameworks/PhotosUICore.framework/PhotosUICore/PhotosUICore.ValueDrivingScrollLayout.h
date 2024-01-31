@interface PhotosUICore.ValueDrivingScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    void /* unknown type, empty encoding */ numberOfPages;
    void /* unknown type, empty encoding */ targetPosition;
    void /* unknown type, empty encoding */ scrollHandler;
    void /* unknown type, empty encoding */ scrollContentLayout;
}

- (id)init;
- (void)isScrollingDidChange;
- (void).cxx_destruct;
- (id)initWithContentLayout:(id)a0;
- (void)scrollLayoutDidScroll:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2 currentContentOffset:(struct CGPoint { double x0; double x1; })a3;

@end
