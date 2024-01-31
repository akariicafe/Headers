@interface STUIStatusBarVisualProvider_DynamicSplitMedium : STUIStatusBarVisualProvider_DynamicSplit

+ (double)baseFontSize;
+ (double)expandedFontSize;

- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (double)expandedIconScale;
- (double)bottomLeadingTopOffset;
- (id)leadingItemCutoffWidths;
- (id)trailingItemCutoffWidths;

@end
