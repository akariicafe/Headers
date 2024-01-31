@class UILabel, NSString;

@interface DMCProfileTitleTextCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
