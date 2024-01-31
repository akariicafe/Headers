@interface ChronoCore.Application : UIApplication

@property (nonatomic, readonly) BOOL hostsSystemStatusBar;

- (id)init;
- (BOOL)_hostsSystemStatusBar;
- (BOOL)_shouldAllowKeyboardArbiter;
- (BOOL)_supportsAlwaysOnDisplay;
- (BOOL)_isSpringBoard;

@end
