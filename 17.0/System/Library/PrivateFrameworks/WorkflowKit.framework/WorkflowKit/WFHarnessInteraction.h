@class WFHarnessActionSelector;

@interface WFHarnessInteraction : NSObject

@property (readonly, nonatomic) WFHarnessActionSelector *selector;
@property (readonly, nonatomic) Class dialogRequestClass;
@property (readonly, nonatomic) id /* block */ interaction;

- (void).cxx_destruct;
- (id)initWithSelector:(id)a0 dialogRequestClass:(Class)a1 interaction:(id /* block */)a2;

@end
