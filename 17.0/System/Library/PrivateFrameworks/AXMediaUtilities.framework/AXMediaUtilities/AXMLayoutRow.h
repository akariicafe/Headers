@class NSMutableArray;

@interface AXMLayoutRow : AXMLayoutItem {
    NSMutableArray *_cells;
}

+ (id)row:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)cells;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;
- (void)addCell:(id)a0;

@end
