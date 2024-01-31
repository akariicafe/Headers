@class NSString, DATaskManager, DAStatusReport;

@interface SubCalDATask : NSObject <DATask>

@property (nonatomic) BOOL finished;
@property (weak, nonatomic) DATaskManager *taskManager;
@property (retain, nonatomic) DAStatusReport *statusReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)performTask;
- (void)didFinish;
- (void)cancelTaskWithReason:(int)a0 underlyingError:(id)a1;
- (BOOL)shouldHoldPowerAssertion;
- (id)consumerDictKey;
- (void)performDelegateCallbackWithError:(id)a0;
- (void)willFinish;

@end
