@class UIVisualEffectView, UIBlurEffect;

@interface _UISearchAtomBackgroundView : UIView {
    UIVisualEffectView *_visualEffectView;
}

@property (nonatomic) long long selectionStyle;
@property (retain, nonatomic) UIBlurEffect *blurEffect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_transitionFromBlurEffect:(id)a0 toBlurEffect:(id)a1;
- (void)_updateSelectionStyleMask;

@end
