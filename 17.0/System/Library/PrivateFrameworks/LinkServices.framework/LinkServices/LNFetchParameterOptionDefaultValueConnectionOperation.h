@class NSString, LNDynamicOption, LNActionMetadata, LNAction;

@interface LNFetchParameterOptionDefaultValueConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (copy, nonatomic) LNAction *action;
@property (copy, nonatomic) LNActionMetadata *actionMetadata;
@property (copy, nonatomic) NSString *parameterIdentifier;
@property (copy, nonatomic) LNDynamicOption *result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 actionMetadata:(id)a2 parameterIdentifier:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;

@end
