@class NSArray;

@interface PKMultiKeyValueCell : UICollectionViewListCell {
    NSArray *_titleLabels;
    NSArray *_subtitleLabels;
}

@property (copy, nonatomic) NSArray *sources;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (BOOL)_shouldStackLabelsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
