@interface CKPopoverViewLayoutConfiguration : NSObject

@property (nonatomic) double minimumSendMenuDimension;
@property (nonatomic) double defaultAppCompactHeight;
@property (nonatomic) double preferredAppWidth;
@property (nonatomic) double minimumTopSpacing;
@property (nonatomic) double minimumTrailingSpacing;
@property (nonatomic) double maximumHeight;

- (struct CGSize { double x0; double x1; })optimalSizeForPreferredContentSize:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })optimalSizeForPresentingAppInCompactStyle:(BOOL)a0;
- (struct CGSize { double x0; double x1; })optimalSizeForPresentingSendMenuWithPreferredContentSize:(struct CGSize { double x0; double x1; })a0;

@end
