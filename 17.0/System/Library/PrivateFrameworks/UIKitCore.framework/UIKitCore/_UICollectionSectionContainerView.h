@class _UICollectionViewSubviewRouter;

@interface _UICollectionSectionContainerView : UIView {
    _UICollectionViewSubviewRouter *_subviewRouter;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)bringSubviewToFront:(id)a0;
- (void)sendSubviewToBack:(id)a0;
- (void).cxx_destruct;
- (void)_willRemoveSubview:(id)a0;
- (void)exchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;

@end
