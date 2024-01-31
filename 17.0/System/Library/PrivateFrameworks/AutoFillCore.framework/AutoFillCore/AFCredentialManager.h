@class LAContext, NSDictionary, NSString, SFAppAutoFillPasskeyProvider, SFAppAutoFillOneTimeCodeProvider;

@interface AFCredentialManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver> {
    SFAppAutoFillPasskeyProvider *_passkeyProvider;
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
}

@property (retain, nonatomic) NSDictionary *queuedCustomInfo;
@property (retain, nonatomic) NSDictionary *queuedUnauthenticatedCustomInfo;
@property (retain, nonatomic) LAContext *laContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)oneTimeCodeProviderReceivedCode:(id)a0;
- (id)obtainApplicationIdentifierFromConnection:(id)a0;
- (id)obtainBundleIdentifierFromConnection:(id)a0;
- (id)_autoFillPayloadForPasskey:(id)a0 customInfoType:(unsigned long long *)a1;
- (id)_autoFillPayloadForPasswordCredential:(id)a0 customInfoType:(unsigned long long *)a1;
- (void)_consumeOneTimeCodeAutoFillSuggestionIfNeeded:(id)a0;
- (id)_suggestionForPasskey:(id)a0 autoFillPayload:(id)a1 customInfoType:(unsigned long long)a2;
- (id)_suggestionForPasswordCredential:(id)a0 autoFillPayload:(id)a1 customInfoType:(unsigned long long)a2;
- (void)generateHideMyEmailAutoFillWithRenderTraits:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateHideMyEmailSuggestionWithApplicationBundleId:(id)a0 applicationId:(id)a1 completionHandler:(id /* block */)a2;
- (id)generateLoginAutoFillWithDocumentTraits:(id)a0;
- (void)generateOneTimeCodeAutoFillSuggestionsWithDocumentTraits:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateSignupAutoFillWithAutoFillMode:(unsigned long long)a0 documentTraits:(id)a1 completionHandler:(id /* block */)a2;
- (void)getCredentialsWithApplicationIdentifier:(id)a0 documentTraits:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)hasAutoFillContextEntitlementForConnection:(id)a0;
- (void)shouldAcceptAutoFill:(id)a0 withPayload:(id)a1 documentTraits:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldAuthenticateToAcceptAutoFill;

@end
