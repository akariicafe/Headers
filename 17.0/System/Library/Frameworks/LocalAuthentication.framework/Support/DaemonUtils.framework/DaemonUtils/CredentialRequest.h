@class LASecureData;

@interface CredentialRequest : Request

@property (readonly, nonatomic) long long credentialType;
@property (readonly, nonatomic) LASecureData *credentialData;
@property (readonly, nonatomic) BOOL readOnly;

- (void).cxx_destruct;
- (id)initWithCredential:(long long)a0 value:(id)a1 readOnly:(BOOL)a2;

@end
