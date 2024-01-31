@class NSArray;

@interface LNFetchViewActionsConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *result;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
