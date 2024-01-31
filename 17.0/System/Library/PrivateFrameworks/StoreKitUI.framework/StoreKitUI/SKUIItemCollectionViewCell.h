@class NSString, SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property (readonly, nonatomic) SKUIItemCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)configureForItem:(id)a0 clientContext:(id)a1;
- (void)setCellLayoutNeedsLayout;

@end
