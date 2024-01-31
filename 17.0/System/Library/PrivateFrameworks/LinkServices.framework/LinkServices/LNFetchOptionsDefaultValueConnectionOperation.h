@class LNAction;

@interface LNFetchOptionsDefaultValueConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) LNAction *action;
@property (copy, nonatomic) LNAction *result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
