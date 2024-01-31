@class NSString, UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UILabel *registrarLabel;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;

@end
