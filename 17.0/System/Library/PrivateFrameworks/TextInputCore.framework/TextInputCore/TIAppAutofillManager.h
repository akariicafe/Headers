@class NSUUID, NSString, NSDate, TICredentialCustomInfo, SFAppAutoFillPasskeyProvider, LAContext, TIKeyboardSecureCandidateRenderer, NSObject, SFAppAutoFillOneTimeCodeProvider;
@protocol OS_dispatch_queue;

@interface TIAppAutofillManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver, TIAppAutofillManaging> {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync;
@property (retain, nonatomic) TICredentialCustomInfo *queuedCustomInfo;
@property (retain, nonatomic) TICredentialCustomInfo *queuedUnauthenticatedCustomInfo;
@property (retain, nonatomic) NSDate *dateOfLastPasswordAutoFill;
@property (copy, nonatomic) NSString *lastAutofilledUsername;
@property (retain, nonatomic) LAContext *laContext;
@property (readonly, nonatomic) SFAppAutoFillPasskeyProvider *passkeyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasOneTimeCode;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;

+ (id)sharedInstance;
+ (void)_fetchCredentialsWithPasskeyProvider:(id)a0 autofillContext:(id)a1 textContentType:(id)a2 applicationIdentifier:(id)a3 auditToken:(struct { unsigned int x0[8]; })a4 completion:(id /* block */)a5;
+ (void)setSharedAppAutofillManager:(id)a0;
+ (void)getCredentialsWithApplicationIdentifier:(id)a0 autofillContext:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (BOOL)_simulatesAutofillCandidates;

- (id)initPrivate;
- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;
- (void)presentHideMyEmailUI:(id)a0 keyboardState:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasAutofillContextEntitlementForConnection:(id)a0;
- (void)reset;
- (void)generateHideMyEmailCandidateWithSlotID:(unsigned int)a0 applicationBundleId:(id)a1 applicationId:(id)a2 keyboardState:(id)a3 completionHandler:(id /* block */)a4;
- (id)customInfoFromCredential:(id)a0;
- (BOOL)isValidedString:(id)a0;
- (id)_autoFillPayloadForPasswordCredential:(id)a0 keyboardInfoType:(unsigned long long *)a1;
- (id)_secureCandidateForPasskey:(id)a0 fromLocalizedStringKey:(id)a1;
- (id)_autoFillPayloadForPasskey:(id)a0 keyboardInfoType:(unsigned long long *)a1;
- (void)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completion:(id /* block */)a2;
- (void)_finishAutofillFormCandidatesOnMainThreadWithCredentials:(id)a0 renderTraits:(id)a1 documentIdentifier:(id)a2 clientIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)generateJustHMEAutofillFormSuggestionWithRenderTraits:(id)a0 withKeyboardState:(id)a1 applicationID:(id)a2 applicationBundleID:(id)a3 completionHandler:(id /* block */)a4;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (void).cxx_destruct;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (void)oneTimeCodeProviderReceivedCode:(id)a0;
- (void)obtainCredential:(id)a0;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (id)_secureCandidateForPasswordCredential:(id)a0 fromLocalizedStringKey:(id)a1;
- (void)oneTimeCodeProvider:(id)a0 didUpdateOneTimeCode:(id)a1;

@end
