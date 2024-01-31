@class UILabel, NSString, NSLayoutConstraint;

@interface HRMetadataEducationTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) NSLayoutConstraint *topToTitleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleBaselineToBodyBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bodyBottomAnchorToBottomConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;

+ (id)defaultReuseIdentifier;

- (id)_titleLabelFont;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void)_setUpConstraints;
- (id)_bodyLabelFont;
- (void)_setUpUI;
- (double)_bodyBottomAnchorToBottom;
- (id)_bodyLabelFontTextStyle;
- (double)_titleBaselineToBodyBaseline;
- (id)_titleLabelFontTextStyle;
- (double)_topToTitleBaseline;

@end
