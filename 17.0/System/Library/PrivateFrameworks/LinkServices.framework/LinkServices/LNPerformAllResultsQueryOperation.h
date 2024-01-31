@class NSString, LNQueryOutput;

@interface LNPerformAllResultsQueryOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSString *entityMangledTypeName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) LNQueryOutput *output;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 entityMangledTypeName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
