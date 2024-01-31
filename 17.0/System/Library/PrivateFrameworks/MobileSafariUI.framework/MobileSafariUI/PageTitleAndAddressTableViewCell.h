@interface PageTitleAndAddressTableViewCell : CompletionListTableViewCell

@property (class, readonly, nonatomic) double defaultHeight;

- (void)traitCollectionDidChange:(id)a0;
- (void)_updateFont;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateNumberOfLines;
- (void)setTitle:(id)a0 address:(id)a1 prompt:(id)a2 withQuery:(id)a3;

@end
