@interface _UISearchControllerView : UIView

@property (nonatomic) BOOL _ensureSystemInputViewAboveSearchBarContainerView;

- (void)_ensureCarPlayLimitedUIIsOnTop;
- (void)_ensureContainerIsOnTop;
- (void)_ensureViewOfClassIsOnTop:(Class)a0;
- (void)_addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)bringSubviewToFront:(id)a0;
- (void)sendSubviewToBack:(id)a0;
- (void)_ensurePortalViewIsOnTop;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
