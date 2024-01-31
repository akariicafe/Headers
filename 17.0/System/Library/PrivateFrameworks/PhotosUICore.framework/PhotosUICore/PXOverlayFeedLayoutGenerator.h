@interface PXOverlayFeedLayoutGenerator : PXCachingLayoutGenerator

@property (nonatomic) struct CGPoint { double x; double y; } visibleOrigin;

- (void)updateContentSize:(out struct CGSize { double x0; double x1; } *)a0 itemRects:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 itemKinds:(out long long *)a2 zPositions:(out float *)a3;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })_frameForItemAtIndex:(long long)a0 in:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 verticalOffset:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItemInColumn:(long long)a0 columnCount:(long long)a1 verticalOffset:(double)a2;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0 updateFirstItemPosition:(BOOL)a1;

@end
