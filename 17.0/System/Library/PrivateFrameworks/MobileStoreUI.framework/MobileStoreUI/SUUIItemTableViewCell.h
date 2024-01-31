@class NSString, SUUIItemCellLayout;

@interface SUUIItemTableViewCell : SUUITableViewCell <SUUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property (readonly, nonatomic) SUUIItemCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)configureForItem:(id)a0 clientContext:(id)a1 rowIndex:(long long)a2;
- (void)configureForItem:(id)a0 rowIndex:(long long)a1;
- (void)setCellLayoutNeedsLayout;

@end
