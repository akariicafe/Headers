@class NSArray;

@interface GKBrushList : GKThemeBrush

@property (retain, nonatomic) NSArray *brushList;

+ (id)brushListWithBrushes:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBrushAtIndex:(unsigned long long)a1 input:(id)a2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 input:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawRectForBrushAtIndex:(unsigned long long)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 input:(id)a2;
- (void)willDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBrushAtIndex:(unsigned long long)a1 input:(id)a2;

@end
