@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper

- (unsigned long long)layerCount;
- (unsigned long long)pointCount;
- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned long long)a0 inLayer:(unsigned long long)a1 andSlice:(unsigned long long)a2;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;

@end
