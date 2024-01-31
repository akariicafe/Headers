@interface SMSessionStateTransitionDecision : NSObject

@property BOOL isAllowed;
@property (copy) id /* block */ actionBlock;

- (void).cxx_destruct;
- (id)initWithIsAllowed:(BOOL)a0 actionBlock:(id /* block */)a1;

@end
