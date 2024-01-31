@class WFHarnessActionSelector;

@interface WFHarnessActionCondition : NSObject

@property (readonly, nonatomic) WFHarnessActionSelector *selector;
@property (readonly, nonatomic) Class eventClass;
@property (readonly, copy, nonatomic) id /* block */ eventHandler;

- (void).cxx_destruct;
- (void)evaluateWithEvent:(id)a0 context:(id)a1 withResponse:(id /* block */)a2;
- (id)initWithSelector:(id)a0 eventClass:(Class)a1 eventHandler:(id /* block */)a2;

@end
