@protocol BNBannerSourceListenerPresentableViewControllerViewDelegate;

@interface BNBannerSourceListenerPresentableViewControllerView : UIView

@property (weak, nonatomic) id<BNBannerSourceListenerPresentableViewControllerViewDelegate> delegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
