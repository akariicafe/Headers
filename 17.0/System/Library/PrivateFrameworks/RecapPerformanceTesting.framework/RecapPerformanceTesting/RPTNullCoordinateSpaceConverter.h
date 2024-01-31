@interface RPTNullCoordinateSpaceConverter : RPTCoordinateSpaceConverter

- (id)init;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGVector { double x0; double x1; })convertVector:(struct CGVector { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSize:(struct CGSize { double x0; double x1; })a0;

@end
