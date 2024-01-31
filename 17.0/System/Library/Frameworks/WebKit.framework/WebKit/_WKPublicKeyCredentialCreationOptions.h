@class _WKAuthenticatorSelectionCriteria, NSArray, _WKAuthenticationExtensionsClientInputs, _WKPublicKeyCredentialUserEntity, _WKPublicKeyCredentialRelyingPartyEntity, NSNumber, NSData;

@interface _WKPublicKeyCredentialCreationOptions : NSObject

@property (retain, nonatomic) _WKPublicKeyCredentialRelyingPartyEntity *relyingParty;
@property (retain, nonatomic) _WKPublicKeyCredentialUserEntity *user;
@property (copy, nonatomic) NSArray *publicKeyCredentialParamaters;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSArray *excludeCredentials;
@property (retain, nonatomic) _WKAuthenticatorSelectionCriteria *authenticatorSelection;
@property (nonatomic) long long attestation;
@property (retain, nonatomic) _WKAuthenticationExtensionsClientInputs *extensions;
@property (retain, nonatomic) NSData *extensionsCBOR;

- (void)dealloc;
- (id)initWithRelyingParty:(id)a0 user:(id)a1 publicKeyCredentialParamaters:(id)a2;

@end
