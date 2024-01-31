@protocol UIKeyboardVisualModeManagerDelegate;

@interface UIKeyboardVisualModeManager : NSObject

@property (nonatomic) int lastVisualMode;
@property (weak, nonatomic) id<UIKeyboardVisualModeManagerDelegate> delegate;

+ (BOOL)softwareKeyboardAllowedOnExternalScreen;
+ (BOOL)windowingSoftwareKeyboardAllowed;
+ (id)visualModeLog;
+ (BOOL)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;

- (id)init;
- (BOOL)windowingModeEnabled;
- (void)keyboardCameraNotification:(id)a0;
- (void)enhancedWindowingModeDidChange:(id)a0;
- (int)visualMode;
- (void).cxx_destruct;
- (BOOL)useVisualModeWindowed;
- (BOOL)textEntryFocusOnExternalDisplay;
- (BOOL)expectedInputModeIsSpecialized;

@end
