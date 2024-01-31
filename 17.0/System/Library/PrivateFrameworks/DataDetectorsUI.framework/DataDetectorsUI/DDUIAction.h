@class DDAction;

@interface DDUIAction : UIAction

@property (retain, nonatomic) DDAction *dd_action;
@property (copy, nonatomic) id /* block */ dd_handler;

- (void).cxx_destruct;
- (void)dd_performAction;
- (void)dd_performActionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
