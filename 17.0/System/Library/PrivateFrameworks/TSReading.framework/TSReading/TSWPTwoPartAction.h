@interface TSWPTwoPartAction : NSObject {
    id /* block */ _startAction;
    id /* block */ _cancelAction;
    id /* block */ _finishAction;
}

@property BOOL performImmediately;

+ (id)actionWithStartAction:(id /* block */)a0 cancelAction:(id /* block */)a1 finishAction:(id /* block */)a2;

- (void)dealloc;
- (void)cancel;
- (id)initWithStartAction:(id /* block */)a0 cancelAction:(id /* block */)a1 finishAction:(id /* block */)a2;
- (void)performFinishAction;
- (void)performStartAction;

@end
