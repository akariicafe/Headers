@interface AXUIReachabilityHelper : NSObject

+ (id)sharedHelper;

- (void)animateForReachability:(id /* block */)a0 payload:(id)a1 completion:(id /* block */)a2;
- (double)reachabilityOffsetForPayload:(id)a0;

@end
