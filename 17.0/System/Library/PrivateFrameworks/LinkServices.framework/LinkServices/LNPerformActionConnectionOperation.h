@class LNActionExecutor, LNSuccessResult, LNAction;

@interface LNPerformActionConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNActionExecutor *executor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) LNSuccessResult *result;

- (void)start;
- (void).cxx_destruct;
- (double)timeout;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 executor:(id)a2 executorActivity:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;

@end
