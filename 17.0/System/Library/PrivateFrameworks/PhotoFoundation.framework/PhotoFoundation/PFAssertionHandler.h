@protocol PFAssertionPolicyHandler;

@interface PFAssertionHandler : NSAssertionHandler

@property (retain) id<PFAssertionPolicyHandler> policy;

+ (id)currentHandler;
+ (void)install;
+ (BOOL)runningUnitTests;
+ (BOOL)runningUnderDebugger;

- (id)init;
- (void).cxx_destruct;
- (id)defaultPolicy;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3;
- (void)handleFailureInMethod:(SEL)a0 object:(id)a1 file:(id)a2 lineNumber:(long long)a3 description:(id)a4;
- (id)defaultTestingPolicy;
- (void)_install;
- (void)continueAfterAssertInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3 arguments:(char *)a4;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3 arguments:(char *)a4;
- (id)newAssertionInfoInMethod:(SEL)a0 object:(id)a1 function:(id)a2 file:(id)a3 lineNumber:(long long)a4 description:(id)a5 arguments:(char *)a6;

@end
