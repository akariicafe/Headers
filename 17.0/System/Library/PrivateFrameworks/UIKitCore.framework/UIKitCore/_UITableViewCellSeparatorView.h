@class UIVisualEffectView, UIVisualEffect, UIView;

@interface _UITableViewCellSeparatorView : UIView {
    UIView *_backgroundView;
    UIView *_overlayView;
    UIVisualEffectView *_effectView;
}

@property (nonatomic) BOOL drawsWithVibrantLightMode;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
