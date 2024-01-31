@class UIImageView, UILabel;

@interface EventKitTCCTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *symbolImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 title:(id)a2 subtitle:(id)a3 symbolName:(id)a4 imageColor:(id)a5;

@end
