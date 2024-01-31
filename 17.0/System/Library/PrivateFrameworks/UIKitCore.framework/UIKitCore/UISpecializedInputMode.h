@interface UISpecializedInputMode : UIKeyboardInputMode

@property (retain, nonatomic) Class viewControllerClass;

- (void)dealloc;
- (BOOL)includeBarHeight;
- (void).cxx_destruct;
- (BOOL)showSWLayoutWithHWKeyboard;
- (void)clearViewControllerClass;
- (id)hardwareLayout;
- (BOOL)isSpecializedInputMode;

@end
