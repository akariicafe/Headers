@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase

@property (retain, nonatomic) NSData *remoteTokenData;

- (id)init;
- (void)dealloc;
- (double)pageScale;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityCategoryInstalled:(id)a0;

@end
