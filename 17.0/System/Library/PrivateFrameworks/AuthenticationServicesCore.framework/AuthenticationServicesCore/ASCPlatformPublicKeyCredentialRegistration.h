@class NSData, NSString, NSArray;

@interface ASCPlatformPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *attestationObject;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (copy, nonatomic) NSArray *transports;
@property (copy, nonatomic) NSData *extensionOutputsCBOR;
@property (readonly, copy, nonatomic) NSString *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
