@class UIView;

@interface _UIGlyphPathBoundsIntersectionViewData : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } availableBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } glyphPathBounds;
@property (weak, nonatomic) UIView *clippingView;

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_frameDebugDescription:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
