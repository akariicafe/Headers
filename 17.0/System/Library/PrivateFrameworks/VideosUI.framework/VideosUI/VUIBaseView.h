@interface VUIBaseView : UIView

- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;
- (BOOL)vuiIsUserInteractionEnabled;

@end
