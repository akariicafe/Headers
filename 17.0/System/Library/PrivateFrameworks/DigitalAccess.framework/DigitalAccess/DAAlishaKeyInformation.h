@class NSString, NSUUID, NSData, DAAlishaKeyEncryptedRequest, NSArray;

@interface DAAlishaKeyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *pairedEntityIdentifier;
@property (readonly, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) NSUUID *sharingSessionUUID;
@property (readonly, nonatomic) NSString *ownerIDSIdentifier;
@property (readonly, nonatomic) NSData *trackingReceipt;
@property (readonly, nonatomic) NSData *revocationAttestation;
@property (readonly, nonatomic) DAAlishaKeyEncryptedRequest *trackingRequest;
@property (readonly, nonatomic) BOOL onlineImmobilizerToken;
@property (readonly, nonatomic) BOOL vehicleSupportsSharingPassword;
@property (readonly, nonatomic) unsigned long long longTermSharedSecretLength;
@property (readonly, nonatomic) NSArray *supportedTransports;

+ (id)withEndpoint:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
