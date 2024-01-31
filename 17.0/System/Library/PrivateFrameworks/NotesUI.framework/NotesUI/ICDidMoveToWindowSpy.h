@interface ICDidMoveToWindowSpy : UIView

@property (readonly, weak, nonatomic) id owner;
@property (readonly, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)callHandler;
- (id)initWithOwner:(id)a0 handler:(id /* block */)a1;
- (void)scheduleCallHandler;

@end
