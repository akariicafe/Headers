@class NSString;

@interface STUIStatusBarVisualProvider_Split828 : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)baseFontSize;
+ (double)pillCenteringOffset;
+ (double)LTEAPlusFontSize;
+ (double)additionalBottomLeadingMargin;
+ (double)leadingSmallPillSpacing;
+ (BOOL)shrinksSingleCharacterTypes;

- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)lowerExpandedBaselineOffset;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)normalIconScale;
- (double)leadingItemSpacing;
- (double)baselineBottomInset;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)expandedIconScale;
- (double)bottomLeadingTopOffset;
- (double)condensedPointSizeForCellularType:(long long)a0 defaultPointSize:(double)a1 baselineOffset:(double *)a2;
- (double)grabberHeight;

@end
