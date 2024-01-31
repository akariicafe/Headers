@class NSString;

@interface _UIStatusBarVisualProvider_Split1080_Wide : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)referenceScreenScale;
+ (double)additionalBottomLeadingMargin;
+ (double)expandedEdgeInset;
+ (double)expandedFontSize;

- (double)itemSpacing;
- (double)lowerExpandedBaselineOffset;
- (double)baselineBottomInset;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (double)expandedIconScale;
- (double)bottomLeadingTopOffset;

@end
