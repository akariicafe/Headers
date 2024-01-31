@interface _TVGridViewFlowLayout : _TVCollectionViewFlowLayout

@property (nonatomic) struct TVCellMetrics { struct CGSize { double width; double height; } cellSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellPadding; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellInset; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellInsetAlt; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellMargin; } cellMetrics;

- (id)init;
- (double)expectedLineSpacing;

@end
