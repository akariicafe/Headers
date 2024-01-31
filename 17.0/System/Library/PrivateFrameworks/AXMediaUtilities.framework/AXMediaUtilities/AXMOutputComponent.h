@interface AXMOutputComponent : NSObject

@property (class, readonly, nonatomic) BOOL isSupported;

@property (nonatomic) long long componentState;

- (id)init;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;
- (id)description;
- (BOOL)canHandleRequest:(id)a0;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;

@end
