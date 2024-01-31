@interface _UIFallbackPresentationWindow : UIApplicationRotationFollowingWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_includeInDefaultImageSnapshot;

@end
