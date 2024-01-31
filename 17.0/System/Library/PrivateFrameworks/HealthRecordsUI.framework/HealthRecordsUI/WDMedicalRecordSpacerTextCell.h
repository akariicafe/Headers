@class UILabel, NSString, NSLayoutConstraint;

@interface WDMedicalRecordSpacerTextCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL useTallTopPadding;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupSubviews;

@end
