@interface PXMonthsLayoutGenerator : PXCachingLayoutGenerator

@property (readonly, nonatomic) BOOL presentedSingleColumn;

- (void)updateContentSize:(out struct CGSize { double x0; double x1; } *)a0 itemRects:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 itemKinds:(out long long *)a2 zPositions:(out float *)a3;

@end
