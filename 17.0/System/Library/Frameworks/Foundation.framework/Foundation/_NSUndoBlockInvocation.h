@interface _NSUndoBlockInvocation : _NSUndoObject {
    id /* block */ _handler;
}

- (void)invoke;
- (void)dealloc;
- (id)initWithTarget:(id)a0 handler:(id /* block */)a1;

@end
