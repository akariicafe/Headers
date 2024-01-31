@class UIImageView, WGCheckView;

@interface WGCircleCheckView : UIView

@property (retain, nonatomic, getter=_circleView) UIImageView *circleView;
@property (retain, nonatomic, getter=_checkView) WGCheckView *checkView;
@property (nonatomic, getter=isChecked) BOOL checked;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isFrozen;
- (void)_setFrozen:(BOOL)a0;
- (id)_configureCircleViewIfNecessary;
- (void)_configureCheckViewIfNecessary;
- (void)_setChecked:(BOOL)a0 completion:(id /* block */)a1;

@end
