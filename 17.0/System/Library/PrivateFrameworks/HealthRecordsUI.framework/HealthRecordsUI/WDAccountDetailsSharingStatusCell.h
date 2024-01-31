@class UILabel, NSArray, UIActivityIndicatorView;

@interface WDAccountDetailsSharingStatusCell : UITableViewCell {
    NSArray *_withSpinnerConstraint;
    NSArray *_noSpinnerConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIActivityIndicatorView *statusIndicator;

+ (id)reuseIdentifier;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stopSpinner;
- (void)_setupUI;
- (void)startSpinner;

@end
