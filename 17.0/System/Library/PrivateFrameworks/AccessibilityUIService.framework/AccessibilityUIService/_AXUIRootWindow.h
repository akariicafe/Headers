@interface _AXUIRootWindow : _UIRootWindow <AXUIWindowProtocol>

@property (nonatomic) BOOL shouldRespondToDarkModeChanges;
@property (nonatomic) BOOL isHandlingFullScreenPresentation;

+ (BOOL)_isSecure;

- (id)accessibilityLabel;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)_layerForCoordinateSpaceConversion;
- (id)description;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedSafeAreaInsets;
- (id)_accessibilityElementCommunityIdentifier;
- (BOOL)_accessibilityIsIsolatedWindow;

@end
