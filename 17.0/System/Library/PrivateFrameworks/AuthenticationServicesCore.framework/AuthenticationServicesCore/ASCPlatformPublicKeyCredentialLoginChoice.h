@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID, SFPasskeyCredentialIdentity, NSData, NSArray;

@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *userVisibleName;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, copy, nonatomic) NSString *userHandle;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (readonly, copy, nonatomic) NSUUID *publicKeyCredentialOperationUUID;
@property (readonly, copy, nonatomic) SFPasskeyCredentialIdentity *credentialIdentity;
@property (readonly, copy, nonatomic) NSString *externalCredentialProviderName;
@property (readonly, copy, nonatomic) NSString *externalCredentialProviderBundleID;
@property (readonly, copy, nonatomic) NSData *clientDataHash;
@property (readonly, copy, nonatomic) NSString *userVerificationPreference;
@property (readonly, copy, nonatomic) NSArray *supportedAlgorithms;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) BOOL isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initRegistrationChoiceWithOptions:(id)a0;
- (id)initWithCredentialIdentity:(id)a0 publicKeyCredentialOperationUUID:(id)a1 clientDataHash:(id)a2 userVerificationPreference:(id)a3 supportedAlgorithms:(id)a4;
- (id)initWithName:(id)a0 displayName:(id)a1 customTitle:(id)a2 identifier:(id)a3 userHandle:(id)a4 relyingPartyIdentifier:(id)a5 publicKeyCredentialOperationUUID:(id)a6 groupID:(id)a7;
- (id)_initAsRegistrationChoice:(BOOL)a0 withName:(id)a1 displayName:(id)a2 customTitle:(id)a3 identifier:(id)a4 userHandle:(id)a5 relyingPartyIdentifier:(id)a6 publicKeyCredentialOperationUUID:(id)a7 externalCredentialProviderName:(id)a8 externalCredentialProviderBundleID:(id)a9 supportedAlgorithms:(id)a10 groupID:(id)a11;
- (id)initRegistrationChoiceWithOptions:(id)a0 externalCredentialProviderName:(id)a1 externalCredentialProviderBundleID:(id)a2;

@end
