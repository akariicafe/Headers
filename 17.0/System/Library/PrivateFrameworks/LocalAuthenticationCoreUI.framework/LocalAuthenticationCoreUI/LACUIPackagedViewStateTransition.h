@class NSString;

@interface LACUIPackagedViewStateTransition : NSObject {
    id /* block */ _handler;
}

@property (readonly, nonatomic) NSString *fromState;
@property (readonly, nonatomic) NSString *toState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)complete:(BOOL)a0;
- (id)initWithFromState:(id)a0 toState:(id)a1 completion:(id /* block */)a2;

@end
