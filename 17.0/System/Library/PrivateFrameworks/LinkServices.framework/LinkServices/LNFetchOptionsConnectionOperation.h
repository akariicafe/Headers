@class LNDynamicOptionsProviderReference, LNActionParameterMetadata, NSString, LNDynamicOptionsResult, LNActionMetadata, LNAction;

@interface LNFetchOptionsConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (retain, nonatomic) LNAction *action;
@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (retain, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (retain, nonatomic) LNDynamicOptionsProviderReference *optionsProviderReference;
@property (copy, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) LNDynamicOptionsResult *result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 actionMetadata:(id)a2 parameterMetadata:(id)a3 optionsProviderReference:(id)a4 searchTerm:(id)a5 localeIdentifier:(id)a6 queue:(id)a7 completionHandler:(id /* block */)a8;

@end
