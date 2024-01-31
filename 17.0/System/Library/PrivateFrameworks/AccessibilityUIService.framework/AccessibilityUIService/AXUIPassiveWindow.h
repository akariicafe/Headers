@interface AXUIPassiveWindow : AXUIWindow

- (BOOL)accessibilityElementsHidden;
- (BOOL)_ignoresHitTest;
- (BOOL)_allowsOcclusionDetectionOverride;

@end
