@interface STUIStatusBarVisualProvider_Split1080 : STUIStatusBarVisualProvider_Split1125

+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)pillCenteringOffset;
+ (double)referenceScreenScale;
+ (struct CGSize { double x0; double x1; })notchSize;
+ (double)nativeDisplayWidth;

- (double)itemSpacing;
- (long long)normalIconSize;
- (struct CGSize { double x0; double x1; })pillSize;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)baselineBottomInset;
- (double)leadingSmallPillSpacing;
- (struct CGSize { double x0; double x1; })smallPillSize;

@end
