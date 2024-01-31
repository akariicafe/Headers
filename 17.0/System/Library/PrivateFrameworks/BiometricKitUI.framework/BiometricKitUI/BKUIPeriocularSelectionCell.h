@class UILabel, UIImageView;

@interface BKUIPeriocularSelectionCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *iconView;

- (id)_titleFont;
- (id)_descriptionFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)BKUIPeriocularSelectionCellTopBottomPadding;

@end
