@class SBSwitcherChamoisLayoutAttributes;

@interface SBContinuousExposeAutoLayoutConfiguration : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double dockHeightWithBottomEdgePadding;
@property (readonly, nonatomic) SBSwitcherChamoisLayoutAttributes *chamoisLayoutAttributes;

- (void).cxx_destruct;
- (id)initWithContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenScale:(double)a1 dockHeightWithBottomEdgePadding:(double)a2 chamoisLayoutAttributes:(id)a3;

@end
