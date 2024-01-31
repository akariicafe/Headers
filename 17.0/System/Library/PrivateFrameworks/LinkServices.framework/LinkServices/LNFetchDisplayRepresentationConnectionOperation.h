@class NSArray;

@interface LNFetchDisplayRepresentationConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 actions:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
