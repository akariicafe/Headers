@class UIKeyboard;

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateKeyboardRenderConfiguration;

@end
