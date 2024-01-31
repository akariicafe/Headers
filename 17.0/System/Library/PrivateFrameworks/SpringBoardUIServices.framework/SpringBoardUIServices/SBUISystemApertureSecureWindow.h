@interface SBUISystemApertureSecureWindow : UIWindow

+ (BOOL)_isSecure;

- (BOOL)accessibilityIgnoresInvertColors;
- (void)accessibilityApplyInvertFilter;
- (BOOL)_accessibilityInvertColorsIsDarkWindow;

@end
