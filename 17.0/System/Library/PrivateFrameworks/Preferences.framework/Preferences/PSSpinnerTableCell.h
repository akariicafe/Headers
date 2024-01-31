@class UIActivityIndicatorView;

@interface PSSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
}

@property (readonly, nonatomic) UIActivityIndicatorView *spinner;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
