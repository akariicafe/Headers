@class TFAppLockupViewSpecification, UIImageView, NSString, UILabel;

@interface TFAppLockupView : UIView <TFImageAssigning>

@property (retain, nonatomic) TFAppLockupViewSpecification *specification;
@property (readonly, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *primarySubtitleLabel;
@property (readonly, nonatomic) UILabel *secondarySubtitleLabel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } displayedIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutLabelsInLayoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareForDisplayWithTraitCollection:(id)a0;
- (void)_styleSubviews;

@end
