@class UIImageView, UIView;

@interface _TVRMatchPointArtworkView : UIView {
    UIView *_selectIndicator;
    UIImageView *_upImageView;
    UIImageView *_rightImageView;
    UIImageView *_downImageView;
    UIImageView *_leftImageView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)highlightForButtonType:(long long)a0 enabled:(BOOL)a1;
- (BOOL)touchLocationIsConsideredCenter:(struct CGPoint { double x0; double x1; })a0;

@end
