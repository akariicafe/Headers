@interface SBSystemApertureWindow : SBFSecureTouchPassThroughWindow

- (BOOL)accessibilityIgnoresInvertColors;
- (BOOL)_allowsOcclusionDetectionOverride;
- (void)accessibilityApplyInvertFilter;
- (void)setAutorotates:(BOOL)a0 forceUpdateInterfaceOrientation:(BOOL)a1;
- (BOOL)_accessibilityInvertColorsIsDarkWindow;

@end
