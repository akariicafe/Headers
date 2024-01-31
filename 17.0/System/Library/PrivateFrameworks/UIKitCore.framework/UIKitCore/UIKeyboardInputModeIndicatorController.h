@class UIDelayedAction;
@protocol UIKeyboardInputModeIndicatorControllerDelegate;

@interface UIKeyboardInputModeIndicatorController : NSObject

@property (retain, nonatomic) UIDelayedAction *dismissAction;
@property (retain, nonatomic) UIDelayedAction *idleAction;
@property (weak, nonatomic) id<UIKeyboardInputModeIndicatorControllerDelegate> delegate;

+ (BOOL)enabled;

- (void)willResignActive;
- (void)clear;
- (void)keyPressed;
- (void)dismissIndicator;
- (BOOL)enabled;
- (void)showIndicatorWithReason:(id)a0 force:(BOOL)a1;
- (void)hardwareKeyboardDettached;
- (void)idle;
- (id)inputModeUpdateTime;
- (void).cxx_destruct;
- (void)keyboardWindowEnabled:(BOOL)a0;
- (void)inputModeSelectorDidOpen;
- (void)inputModeChanged;
- (void)presentIndicatorWithReason:(id)a0 force:(BOOL)a1;

@end
