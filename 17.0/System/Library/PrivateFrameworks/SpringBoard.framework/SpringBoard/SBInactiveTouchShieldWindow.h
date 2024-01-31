@interface SBInactiveTouchShieldWindow : _UIRootWindow

+ (BOOL)_isSecure;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_appearsInLoupe;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)initWithDisplay:(id)a0;

@end
