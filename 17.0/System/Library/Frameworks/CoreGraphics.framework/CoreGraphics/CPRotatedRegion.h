@interface CPRotatedRegion : CPRegion {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBounds;
    BOOL dirtyNormalizedBounds;
}

- (double)left;
- (double)center;
- (struct CGPoint { double x0; double x1; })anchor;
- (id)init;
- (double)right;
- (double)top;
- (double)bottom;
- (void)fitBoundsToChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (void)resizeWith:(id)a0;

@end
