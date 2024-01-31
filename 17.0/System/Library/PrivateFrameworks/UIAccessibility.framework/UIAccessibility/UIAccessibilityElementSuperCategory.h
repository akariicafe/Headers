@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)init;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)initWithAccessibilityContainer:(id)a0;
- (void)accessibilityIncrement;
- (id)description;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)focusGroupIdentifier;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingVisibleAncestor;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (void)_accessibilitySetValue:(id)a0;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (BOOL)_accessibilityProvidesOwnFrame;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilityUsesFrameInContainerSpace;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;

@end
