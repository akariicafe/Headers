@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {
    UIButton *_actionButton;
    UIButton *_secondaryActionButton;
}

@property (readonly, retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) double topPadding;
@property (nonatomic) double secondaryActionTopPadding;
@property (nonatomic) double bottomPadding;

+ (id)descriptionLabel;
+ (id)buttonWithTitle:(id)a0 textStyle:(id)a1 action:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_recommendedSecondaryActionTopPaddingForTableView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 action:(id)a1 secondaryAction:(id)a2 title:(id)a3 secondaryTitle:(id)a4 desscription:(id)a5;
- (void)sizeToFitForTableView:(id)a0;

@end
