@interface AXUIDaemonWindow : UIWindow

+ (BOOL)_isSecure;

- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedSafeAreaInsets;
- (BOOL)_accessibilityWindowUsesOwnOrientationForComparingGeometry;
- (void)_didUpdateOrientation:(id)a0;

@end
