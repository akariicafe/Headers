@class UILabel;

@interface PUITrackerCell : PSTableCell

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
