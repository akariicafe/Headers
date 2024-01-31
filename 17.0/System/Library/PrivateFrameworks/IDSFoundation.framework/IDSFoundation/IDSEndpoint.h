@class NSDate, IDSURI, NSString, NSData, IDSEndpointCapabilities, NSError, IDSFamilyEndpointData, IDSMPPublicDeviceIdentityContainer, IDSGameCenterData, IDSPushToken;

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying, IDSDestinationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSURI *URI;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) IDSMPPublicDeviceIdentityContainer *publicDeviceIdentityContainer;
@property (nonatomic) struct __SecKey { } *applicationPublicDeviceIdentity;
@property (retain, nonatomic) IDSEndpointCapabilities *capabilities;
@property (readonly, nonatomic) NSData *serializedNGMDeviceIdentity;
@property (readonly, nonatomic) NSData *serializedLegacyPublicIdentity;
@property (readonly, nonatomic) NSData *serializedNGMDevicePrekey;
@property (readonly, nonatomic) NSData *serializedApplicationPublicKey;
@property (readonly, nonatomic) short ngmVersion;
@property (readonly, nonatomic) char legacyVersion;
@property (readonly, nonatomic) NSError *identityContainerDeserializationError;
@property (readonly, nonatomic) NSData *KTLoggableData;
@property (readonly, nonatomic) NSData *KTDeviceSignature;
@property (readonly, nonatomic) BOOL mismatchedAccountFlag;
@property (readonly, nonatomic) BOOL ktCapableFlag;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSDate *expireDate;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic) NSString *anonymizedSenderID;
@property (readonly, nonatomic) BOOL verifiedBusiness;
@property (readonly, nonatomic) NSString *senderCorrelationIdentifier;
@property (readonly, nonatomic) double queryTimeInterval;
@property (readonly, nonatomic) NSData *serializedPublicLegacyIdentity;
@property (readonly, nonatomic) IDSFamilyEndpointData *familyEndpointData;
@property (readonly, nonatomic) IDSGameCenterData *gameCenterData;
@property (readonly, nonatomic) IDSPushToken *pushTokenObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)destinationURIs;
- (void)dealloc;
- (id)initWithURI:(id)a0 clientData:(id)a1 pushToken:(id)a2 sessionToken:(id)a3 expireDate:(id)a4 refreshDate:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToEndpoint:(id)a0;
- (id)initWithURI:(id)a0 serviceIdentifier:(id)a1 clientData:(id)a2 KTLoggableData:(id)a3 KTDeviceSignature:(id)a4 mismatchedAccountFlag:(BOOL)a5 ktCapableFlag:(BOOL)a6 pushToken:(id)a7 sessionToken:(id)a8 expireDate:(id)a9 refreshDate:(id)a10 anonymizedSenderID:(id)a11 verifiedBusiness:(BOOL)a12 serializedPublicMessageProtectionIdentity:(id)a13 senderCorrelationIdentifier:(id)a14 queryTimeInterval:(double)a15 serializedNGMDeviceIdentity:(id)a16 serializedNGMDevicePrekey:(id)a17 serializedApplicationPublicKey:(id)a18 familyEndpointData:(id)a19 gameCenterData:(id)a20;
- (id)initWithURI:(id)a0 capabilities:(id)a1 ngmVersion:(short)a2 legacyVersion:(char)a3 KTLoggableData:(id)a4 KTDeviceSignature:(id)a5 mismatchedAccountFlag:(BOOL)a6 ktCapableFlag:(BOOL)a7 pushTokenObject:(id)a8 sessionToken:(id)a9 expireDate:(id)a10 refreshDate:(id)a11 anonymizedSenderID:(id)a12 verifiedBusiness:(BOOL)a13 serializedPublicMessageProtectionIdentity:(id)a14 senderCorrelationIdentifier:(id)a15 queryTimeInterval:(double)a16 serializedNGMDeviceIdentity:(id)a17 serializedNGMDevicePrekey:(id)a18 serializedApplicationPublicKey:(id)a19 familyEndpointData:(id)a20 gameCenterData:(id)a21;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURI:(id)a0 clientData:(id)a1 KTLoggableData:(id)a2 KTDeviceSignature:(id)a3 mismatchedAccountFlag:(BOOL)a4 ktCapableFlag:(BOOL)a5 pushToken:(id)a6 sessionToken:(id)a7 expireDate:(id)a8 refreshDate:(id)a9 anonymizedSenderID:(id)a10 verifiedBusiness:(BOOL)a11 serializedPublicMessageProtectionIdentity:(id)a12 senderCorrelationIdentifier:(id)a13 queryTimeInterval:(double)a14 serializedNGMDeviceIdentity:(id)a15 serializedNGMDevicePrekey:(id)a16 serializedApplicationPublicKey:(id)a17 familyEndpointData:(id)a18 gameCenterData:(id)a19;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
