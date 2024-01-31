@class NSMutableArray;

@interface AXMLayoutReceipt : AXMLayoutItem {
    NSMutableArray *_rows;
}

+ (id)region:(id)a0;

- (id)rows;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)firstLine;
- (void)addRow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
