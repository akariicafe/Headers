@class UIStackView, NSArray, NSString, UIFont, UILabel;

@interface HUTitleValueCell : HUIconCell

@property (retain, nonatomic) NSArray *stackViewConstraints;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *valueLabel;
@property (readonly, nonatomic) UIStackView *labelsStackView;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) BOOL hideValue;
@property (nonatomic) BOOL titleColorFollowsTintColor;
@property (nonatomic) BOOL valueColorFollowsTintColor;
@property (nonatomic) BOOL allowCopyValueToPasteboard;
@property (nonatomic) BOOL useVerticalLayoutOnly;

+ (BOOL)requiresConstraintBasedLayout;

- (void)layoutMarginsDidChange;
- (void)setDisabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)copy:(id)a0;
- (void)updateConstraints;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)_updateTitle;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_updateValue;
- (void)_addTitleLabel;
- (void)_addValueLabel;
- (void)_ensureCorrectHeaderViewOrientation;
- (double)labelSpacing;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
