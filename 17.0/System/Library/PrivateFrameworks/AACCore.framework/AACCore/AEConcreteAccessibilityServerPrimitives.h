@interface AEConcreteAccessibilityServerPrimitives : NSObject <AEAccessibilityServerPrimitives>

@property (readonly, nonatomic, getter=isRestrictedForAAC) BOOL restrictedForAAC;

- (id)observeGuidedAccessActiveStateChangeOnQueue:(id)a0 withHandler:(id /* block */)a1;

@end
