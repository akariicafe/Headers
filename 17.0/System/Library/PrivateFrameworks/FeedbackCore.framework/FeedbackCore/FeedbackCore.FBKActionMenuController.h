@interface FeedbackCore.FBKActionMenuController : NSObject <FeedbackCore.FBKActionController> {
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
}

- (id)init;
- (void)addAction:(id)a0;
- (void).cxx_destruct;
- (id)buildMenu;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 actions:(id)a2;
- (void)addActionWithTitle:(id)a0 image:(id)a1 actionHandler:(id /* block */)a2;
- (void)attachToBarButtonItem:(id)a0;

@end
