@class _TVImageView, VUILabel, VUIVideoAdvisoryViewLayout, UIView;

@interface VUIProductPlacementView : UIView

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) VUILabel *blockDescriptionLabel;

- (BOOL)_isPortrait;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_margin;
- (struct CGSize { double x0; double x1; })_descriptionSize;
- (struct CGSize { double x0; double x1; })_dividerSize;
- (id)initWithAdvisoryInfoDictionary:(id)a0;
- (void)_configureSubviewsWithDictionary:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_descriptionMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_dividerMargin;
- (void)_hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_hideWithAnimationWithCompletion:(id /* block */)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoMargin;
- (struct CGSize { double x0; double x1; })_logoSize;
- (void)_showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_showWithAnimationWithCompletion:(id /* block */)a0;
- (void)show:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
