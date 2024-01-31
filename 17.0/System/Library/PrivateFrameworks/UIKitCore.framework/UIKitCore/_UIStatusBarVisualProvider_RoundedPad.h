@interface _UIStatusBarVisualProvider_RoundedPad : _UIStatusBarVisualProvider_Pad

+ (double)height;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
+ (double)cornerRadius;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })regionCursorInsets;
+ (BOOL)regionCursorIsPill;

- (struct CGSize { double x0; double x1; })pillSize;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)pillFont;
- (id)pillSmallFont;

@end
