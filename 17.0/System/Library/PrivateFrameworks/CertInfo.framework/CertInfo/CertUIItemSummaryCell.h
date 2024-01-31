@class UIImageView, UILabel, UIView;

@interface CertUIItemSummaryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UIView *itemTitleView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemSubtitleLabel;

+ (double)titleOriginX;

- (void)_setupConstraints;
- (void)_setupCell;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (double)cellHeight;
- (id)_profileImageAppropriateForDevice;

@end
