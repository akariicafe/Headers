@interface TSBlueprintManualImpressionUpdateProvider : NSObject {
    void /* unknown type, empty encoding */ updateImpressionsBlocks;
    void /* unknown type, empty encoding */ endImpressionsBlocks;
    void /* unknown type, empty encoding */ visibleViewAccessor;
    void /* unknown type, empty encoding */ visibleRectAccessor;
}

- (id)init;
- (void).cxx_destruct;
- (void)endImpressions;
- (void)setVisibileViewAccessor:(id /* block */)a0 visibleRectAccessor:(id /* block */)a1;
- (void)updateImpressionsForView:(id)a0 withVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
