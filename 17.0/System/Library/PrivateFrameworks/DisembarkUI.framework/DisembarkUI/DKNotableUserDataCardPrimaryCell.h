@class UIStackView, UIImageView, UILabel, UIView;

@interface DKNotableUserDataCardPrimaryCell : UIView

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIStackView *labelContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL hideChevron;

- (id)_titleFont;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_subtitleFont;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (id)_chevronImage;

@end
