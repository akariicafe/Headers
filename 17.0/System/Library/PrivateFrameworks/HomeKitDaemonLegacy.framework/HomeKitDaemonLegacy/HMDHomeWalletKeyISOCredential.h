@class HAPPairingIdentity, NSString, NSData, CIDCPayloadBuilder;

@interface HMDHomeWalletKeyISOCredential : HMFObject <CIDCPayloadBuilderDelegate, HMDHomeWalletKeyISOCredential>

@property (readonly, copy) HAPPairingIdentity *pairingIdentity;
@property (readonly, copy) NSData *deviceCredentialKeyExternalRepresentation;
@property (readonly) CIDCPayloadBuilder *credentialBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
