@class LNQueryRequest, LNQueryOutput;

@interface LNPerformQueryConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, nonatomic) LNQueryRequest *queryRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) LNQueryOutput *output;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 query:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
