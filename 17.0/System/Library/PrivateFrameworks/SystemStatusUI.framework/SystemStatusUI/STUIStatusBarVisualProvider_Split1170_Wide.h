@class NSString;

@interface STUIStatusBarVisualProvider_Split1170_Wide : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)leadingCenteringOffset;
+ (double)pillCenteringOffset;
+ (double)additionalBottomLeadingMargin;
+ (double)expandedFontSize;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (double)expandedIconScale;
- (double)bottomLeadingTopOffset;

@end
