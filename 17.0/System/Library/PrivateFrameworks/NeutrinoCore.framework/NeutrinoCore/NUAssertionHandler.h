@protocol NUAssertionPolicyHandler;

@interface NUAssertionHandler : NSAssertionHandler

@property (retain) id<NUAssertionPolicyHandler> policy;

+ (id)currentHandler;
+ (BOOL)runningUnitTests;

- (id)init;
- (void).cxx_destruct;
- (id)defaultPolicy;
- (void)continueAfterAssertInFunction:(id)a0 file:(id)a1 lineNumber:(unsigned long long)a2 currentlyExecutingJobName:(id)a3 description:(id)a4 arguments:(char *)a5;
- (id)defaultTestingPolicy;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 currentlyExecutingJobName:(id)a3 description:(id)a4;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(unsigned long long)a2 currentlyExecutingJobName:(id)a3 description:(id)a4 arguments:(char *)a5;
- (void)handleFailureInMethod:(SEL)a0 object:(id)a1 file:(id)a2 lineNumber:(long long)a3 currentlyExecutingJobName:(id)a4 description:(id)a5;
- (id)newAssertionInfoInMethod:(SEL)a0 object:(id)a1 function:(id)a2 file:(id)a3 lineNumber:(unsigned long long)a4 currentlyExecutingJobName:(id)a5 description:(id)a6 arguments:(char *)a7;

@end
