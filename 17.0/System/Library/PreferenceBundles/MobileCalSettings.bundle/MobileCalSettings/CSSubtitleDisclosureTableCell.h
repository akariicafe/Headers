@class UILabel;

@interface CSSubtitleDisclosureTableCell : PSTableCell {
    UILabel *_valueLabel;
}

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)canReload;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_valueLabelForSpecifier:(id)a0;

@end
