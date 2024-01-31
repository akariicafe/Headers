@interface IPAMutableRectArray : IPARectArray

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAllRects;
- (void)insertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)removeRectAtIndex:(unsigned long long)a0;
- (void)setRectArray:(id)a0;

@end
