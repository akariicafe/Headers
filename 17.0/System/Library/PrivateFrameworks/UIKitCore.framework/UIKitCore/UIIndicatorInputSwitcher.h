@class NSArray, NSString;
@protocol UITextCursorAssertion;

@interface UIIndicatorInputSwitcher : UIInputSwitcher

@property (retain, nonatomic) id<UITextCursorAssertion> inputModeSelectorAssertion;
@property (retain, nonatomic) id<UITextCursorAssertion> inputModeAssertion;
@property (retain, nonatomic) NSArray *availableInputModes;
@property (nonatomic) BOOL showingCapsLockSwitcher;
@property (retain, nonatomic) NSString *selectedInputMode;

- (BOOL)isVisible;
- (void).cxx_destruct;
- (id)defaultInputMode;
- (void)dismissSwitcher:(BOOL)a0;
- (void)dismissSwitcherWithDelay:(double)a0;
- (BOOL)isVisibleOrHiding;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;

@end
