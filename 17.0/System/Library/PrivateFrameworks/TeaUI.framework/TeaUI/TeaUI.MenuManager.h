@interface TeaUI.MenuManager : UIResponder {
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ menuItems;
    void /* unknown type, empty encoding */ alternateMenuItems;
    void /* unknown type, empty encoding */ stagedMenuActions;
    void /* unknown type, empty encoding */ stagedAlternateMenuActions;
}

- (id)init;
- (void)buildMenuWithBuilder:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)handleAlternateMenuCommandWithSender:(id)a0;
- (void)handleMenuCommandWithSender:(id)a0;

@end
