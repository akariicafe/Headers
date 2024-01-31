@class UILabel, NSLayoutConstraint;

@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomLayoutConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (nonatomic) double bottomPadding;

+ (id)defaultReuseIdentifier;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupSubviews;

@end
