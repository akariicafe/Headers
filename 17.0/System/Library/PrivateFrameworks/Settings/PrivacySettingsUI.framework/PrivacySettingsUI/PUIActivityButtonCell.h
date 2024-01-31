@class UILabel, UIActivityIndicatorView;

@interface PUIActivityButtonCell : PSTableCell

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
