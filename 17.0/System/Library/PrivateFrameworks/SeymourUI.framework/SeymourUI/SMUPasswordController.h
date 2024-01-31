@class NSString, UIViewController, SMUPasswordAlertController;

@interface SMUPasswordController : NSObject <TVRAlertControllerDelegate> {
    SMUPasswordAlertController *_alertController;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ passwordEnteredHandler;
@property (copy, nonatomic) id /* block */ passwordEntryCancelledHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void).cxx_destruct;
- (void)alertController:(id)a0 enteredText:(id)a1;
- (void)alertController:(id)a0 generatedTextInputPayload:(id)a1;
- (void)alertControllerCancelled:(id)a0;
- (void)alertControllerHitKeyboardReturnKey:(id)a0;
- (void)alertControllerPressedDictationButton:(id)a0;
- (void)alertControllerReleasedDictationButton:(id)a0;
- (id)initWithTitle:(id)a0 passwordLength:(long long)a1 supportedOrientations:(unsigned long long)a2;

@end
