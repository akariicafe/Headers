@class NSArray;

@interface LNFetchViewEntitiesConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *result;
@property (copy) NSArray *interactionIDs;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 interactionIDs:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
