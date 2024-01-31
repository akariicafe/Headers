@interface _UIBackdropContentView : UIView {
    BOOL _isForcingLayout;
}

- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (void)_monitoredView:(id)a0 didMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)backdropView:(id)a0 recursivelyUpdateMaskViewsForView:(id)a1;
- (void)recursivelyRemoveBackdropMaskViewsForView:(id)a0;

@end
