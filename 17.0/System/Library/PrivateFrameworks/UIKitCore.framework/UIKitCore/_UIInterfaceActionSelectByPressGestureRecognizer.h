@class UIInterfaceAction, UIInterfaceActionGroupView;
@protocol UIFocusedInterfaceActionPressDelegate;

@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) UIInterfaceAction *interfaceActionOnPressBegan;
@property (weak, nonatomic) id<UIFocusedInterfaceActionPressDelegate> pressDelegate;
@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_gestureChanged:(id)a0;
- (id)initWithFocusedInterfaceActionPressDelegate:(id)a0;

@end
