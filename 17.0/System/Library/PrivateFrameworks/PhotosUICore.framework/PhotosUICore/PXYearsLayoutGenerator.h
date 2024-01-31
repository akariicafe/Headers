@interface PXYearsLayoutGenerator : PXCachingLayoutGenerator

@property (readonly, nonatomic) long long presentedNumberOfColumns;

- (void)updateContentSize:(out struct CGSize { double x0; double x1; } *)a0 itemRects:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
