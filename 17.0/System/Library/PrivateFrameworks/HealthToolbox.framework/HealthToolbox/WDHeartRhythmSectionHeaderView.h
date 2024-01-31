@class UILabel, NSString, NSLayoutConstraint;

@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *bottomToTitleLastBaselineConstraint;
@property (copy, nonatomic) NSString *titleText;

+ (id)defaultReuseIdentifier;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)updateConstraintConstants;
- (void)setUpUI;

@end
