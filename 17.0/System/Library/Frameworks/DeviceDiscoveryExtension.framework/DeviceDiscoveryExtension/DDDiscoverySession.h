@interface DDDiscoverySession : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;

- (void)invalidate;
- (void).cxx_destruct;
- (void)reportEvent:(id)a0;

@end
