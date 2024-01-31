@interface STAppTitleSubtitleCell : PSTableCell

@property (nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL isAppCell;

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setSpecifier:(id)a0;
- (void)layoutSubviews;
- (void)_didFetchAppInfoOrIcon:(id)a0;

@end
