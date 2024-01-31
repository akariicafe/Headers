@class NSArray, UILabel;

@interface MCInstallationWarningCell : UITableViewCell

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UILabel *warningLabel;

+ (id)reuseIdentifier;

- (void)_setupConstraints;
- (void)_setup;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
