@class UILabel, UIStackView, SHSBadgeView;

@interface SHSDualSIMToneTitleView : UIView

@property (retain, nonatomic) SHSBadgeView *badgeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *stackView;

- (id)init;
- (void).cxx_destruct;
- (void)loadConstraintsForTitleView;
- (void)updateContentsWithTitle:(id)a0 badgeText:(id)a1;

@end
