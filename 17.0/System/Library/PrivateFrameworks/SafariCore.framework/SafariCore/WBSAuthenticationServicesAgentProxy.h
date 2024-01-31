@class NSXPCConnection;
@protocol WBSAuthenticationServicesAgentDelegate;

@interface WBSAuthenticationServicesAgentProxy : NSObject <WBSAuthenticationServicesAgentDelegate, WBSAuthenticationServicesAgentInterface> {
    NSXPCConnection *_connection;
}

@property (weak, nonatomic) id<WBSAuthenticationServicesAgentDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 authenticatorData:(id)a2 signature:(id)a3 userHandle:(id)a4 credentialID:(id)a5;
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)test_createPasskeyWithUserName:(id)a0 displayName:(id)a1 relyingPartyIdentifier:(id)a2 userHandle:(id)a3 completionHandler:(id /* block */)a4;
- (id)connection;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)userSelectedAutoFillPasskey:(id)a0 authenticatedLAContext:(id)a1 savedAccountContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 authenticatorData:(id)a2 signature:(id)a3 userHandle:(id)a4 credentialID:(id)a5;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)a0;
- (void)getExternalLoginChoiceForApplicationidentifier:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setUpConnection:(id)a0;
- (void)userSelectedAutoFillNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExternalLoginChoiceForWebFrameIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;

@end
