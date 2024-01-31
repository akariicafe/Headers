@interface SBSceneLayoutOrientationCoordinateSpace : SBSceneLayoutCoordinateSpace {
    long long _referenceOrientation;
    long long _orientation;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithInterfaceOrientation:(long long)a0 withReferenceCoordinateSpace:(id)a1 inOrientation:(long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
