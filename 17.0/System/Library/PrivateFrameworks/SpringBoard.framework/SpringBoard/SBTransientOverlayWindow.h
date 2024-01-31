@interface SBTransientOverlayWindow : SBSecureWindow

+ (BOOL)sb_autorotates;

- (BOOL)_canBecomeKeyWindow;
- (id)hostedSceneIdentityTokens;

@end
