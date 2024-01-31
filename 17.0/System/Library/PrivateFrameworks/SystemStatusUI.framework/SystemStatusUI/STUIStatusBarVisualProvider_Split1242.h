@class NSString;

@interface STUIStatusBarVisualProvider_Split1242 : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (double)baseFontSize;
+ (double)pillCenteringOffset;
+ (double)additionalBottomLeadingMargin;
+ (BOOL)shrinksSingleCharacterTypes;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (double)expandedIconScale;

@end
