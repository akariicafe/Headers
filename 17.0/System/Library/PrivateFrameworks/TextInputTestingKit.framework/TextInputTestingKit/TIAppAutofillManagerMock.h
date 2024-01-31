@class NSString, TIKeyboardSecureCandidateRenderer;

@interface TIAppAutofillManagerMock : NSObject <TIAppAutofillManaging>

@property (readonly, nonatomic) BOOL hasOneTimeCode;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)presentHideMyEmailUI:(id)a0 keyboardState:(id)a1 completion:(id /* block */)a2;
- (void)reset;
- (void)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completion:(id /* block */)a2;
- (void)generateJustHMEAutofillFormSuggestionWithRenderTraits:(id)a0 withKeyboardState:(id)a1 applicationID:(id)a2 applicationBundleID:(id)a3 completionHandler:(id /* block */)a4;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (void).cxx_destruct;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (void)obtainCredential:(id)a0;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completionHandler:(id /* block */)a2;

@end
