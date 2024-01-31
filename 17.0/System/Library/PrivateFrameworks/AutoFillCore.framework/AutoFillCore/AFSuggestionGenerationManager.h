@class NSObject, LAContext, AFLocalizationManager;
@protocol OS_dispatch_queue, _ICPredictionManaging;

@interface AFSuggestionGenerationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<_ICPredictionManaging> _inputContextPredictionManager;
    LAContext *_laContext;
}

@property (readonly, nonatomic) AFLocalizationManager *localizationManager;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)_makeQueue;
- (void).cxx_destruct;
- (void)_authenticateIfNecessaryForCreditCardSuggestion:(id)a0 withPayload:(id)a1 documentTraits:(id)a2 completionHandler:(id /* block */)a3;
- (void)authenticateIfNecessaryForSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateIfNecessaryForSuggestion:(id)a0 documentTraits:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateAutoFillSuggestionsWithAutoFillMode:(unsigned long long)a0 textPrefix:(id)a1 documentTraits:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateContactAutoFillSuggestionsWithTextPrefix:(id)a0 documentTraits:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateCreditCardAutoFillWithCompletionHandler:(id /* block */)a0;
- (id)generateSuggestionsForContactAutoFill:(id)a0 textPrefix:(id)a1;
- (BOOL)needContactAutofill:(unsigned long long)a0;
- (void)shouldAcceptSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldAuthenticateToAcceptAutoFill;

@end
