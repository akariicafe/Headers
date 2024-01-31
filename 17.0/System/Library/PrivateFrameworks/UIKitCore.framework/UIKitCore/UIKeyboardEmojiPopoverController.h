@class NSString, UIKBScreenTraits, UIKBTree, NSMutableArray, UITextInputTraits, UIKeyboardLayoutStar, UIKeyboardTaskQueue, UIKBViewForResponderForwarding;

@interface UIKeyboardEmojiPopoverController : UIKeyboardPopoverController <UIKeyboardLayoutStarDelegate> {
    UIKBScreenTraits *_screenTraits;
    UITextInputTraits *_textInputTraits;
    UIKeyboardTaskQueue *_taskQueue;
    UIKBTree *_keyboard;
    NSMutableArray *_hiddenKeys;
    UIKBViewForResponderForwarding *_containerForActiveKeys;
}

@property (retain, nonatomic) UIKeyboardLayoutStar *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewIsAppearing:(BOOL)a0;
- (BOOL)handleHardwareKeyboardEvent:(id)a0;
- (id)initWithTextInputTraits:(id)a0;
- (id)initWithTextInputTraits:(id)a0 hasVerticalScrolling:(BOOL)a1;
- (id)initWithTextInputTraits:(id)a0 taskQueue:(id)a1;
- (id)initWithTextInputTraits:(id)a0 taskQueue:(id)a1 scrollingDirection:(long long)a2;
- (id)initWithTextInputTraits:(id)a0 taskQueue:(id)a1 scrollingDirection:(long long)a2 window:(id)a3;
- (id)initWithTextInputTraits:(id)a0 taskQueue:(id)a1 window:(id)a2;
- (id)keyboardLayout:(id)a0 containingViewForActiveKey:(id)a1 inKeyplaneView:(id)a2;
- (void)keyboardLayout:(id)a0 didSwitchToKeyplane:(id)a1;
- (id)keyboardLayout:(id)a0 willChangeRenderConfig:(id)a1;
- (double)preferredTextFieldHeight;
- (BOOL)wantsDimmingView;

@end
