@class SBSwitcherChamoisSettings, NSString, NSArray, SBSwitcherChamoisLayoutAttributes;

@interface _SBDisplayItemFlexibleGrid : NSObject <_SBDisplayItemGridProvider> {
    SBSwitcherChamoisSettings *_settings;
    SBSwitcherChamoisLayoutAttributes *_chamoisLayoutAttributes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    NSArray *_widths;
    NSArray *_heights;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;
- (void).cxx_destruct;
- (void)_buildGridWithScreenScale:(double)a0;
- (id)_gridHeightsForSafeHeight:(double)a0 minimumHeight:(double)a1;
- (id)_gridWidthsForSafeWidth:(double)a0 minimumWidth:(double)a1;
- (id)allHeights;
- (id)allWidths;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenScale:(double)a1 chamoisLayoutAttributes:(id)a2;
- (struct CGSize { double x0; double x1; })nearestGridSizeForSize:(struct CGSize { double x0; double x1; })a0 countOnStage:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeAtIndexFromFullWidthForBounds:(unsigned long long)a0;

@end
