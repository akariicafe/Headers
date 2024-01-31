@class UILabel, UIImageView;

@interface ICQUISpecifierCellWithAsyncImageLoading : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_cellImageView;
    UILabel *_accessoryLabel;
}

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)_setupViews;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
