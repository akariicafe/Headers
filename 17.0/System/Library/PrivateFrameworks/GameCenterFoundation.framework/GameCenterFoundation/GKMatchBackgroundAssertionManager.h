@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>

@property (class, nonatomic, readonly) GKMatchBackgroundAssertionManager *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ activeAssertion;

- (void)assertionWillInvalidate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)acquire;
- (void).cxx_destruct;

@end
