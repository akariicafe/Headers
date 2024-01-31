@class VSStateMachine, NSString, NSArray, NSMutableArray, VSJSApp;

@interface VSJSAppScriptEvaluator : NSObject <VSStateMachineDelegate>

@property (retain, nonatomic) VSJSApp *app;
@property (retain, nonatomic) VSStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *remainingURLs;
@property (retain, nonatomic) NSString *currentURL;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) NSArray *urls;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)transitionToFetchingScriptState;
- (id)initWithApp:(id)a0 urls:(id)a1;
- (void)transitionToDoneState;
- (void)transitionToEnqueueingNextUrlState;

@end
