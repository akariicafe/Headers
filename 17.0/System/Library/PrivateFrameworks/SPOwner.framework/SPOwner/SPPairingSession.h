@class NSUUID, NSString, NSData, CLLocation;

@interface SPPairingSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconId;
@property (copy, nonatomic) NSData *nonce;
@property (nonatomic) BOOL pairingUsingTool;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *roleEmoji;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (copy, nonatomic) NSData *ecid;
@property (copy, nonatomic) NSData *chipId;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSData *collaborativeKeyC1;
@property (copy, nonatomic) NSData *payloadSignature;
@property (copy, nonatomic) NSData *attestation;
@property (copy, nonatomic) NSData *systemPublicKey;
@property (copy, nonatomic) NSData *refKeyPublicKey;
@property (copy, nonatomic) NSData *collaborativeKeyC2;
@property (copy, nonatomic) NSData *serverSeed;
@property (copy, nonatomic) NSData *serverSignature;
@property (copy, nonatomic) NSData *serverPublicKey;
@property (copy, nonatomic) NSString *maskedAppleID;
@property (copy, nonatomic) NSString *userMessage;
@property (copy, nonatomic) NSData *baaLeaftCert;
@property (copy, nonatomic) NSData *baaIntermediateCert;
@property (copy, nonatomic) NSData *collaborativeKeyC3;
@property (copy, nonatomic) NSData *confirmSignature;
@property (nonatomic) BOOL ackSuccess;
@property (copy, nonatomic) NSData *keyGenerationStatus;
@property (nonatomic) BOOL isZeus;
@property (nonatomic) long long batteryLevel;
@property (copy, nonatomic) CLLocation *pairingLocation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (void)updateBeaconId:(id)a0;
- (id)initWithIdentifier:(id)a0 nonce:(id)a1;
- (void)updateAckSuccess:(BOOL)a0;
- (void)updateName:(id)a0 roleId:(long long)a1 roleEmoji:(id)a2;
- (void)updatePairingLocation:(id)a0;
- (void)updateToPairingUsingTool;
- (void)updateWithPayloadSignature:(id)a0 attestation:(id)a1 collaborativeKey:(id)a2 systemVersion:(id)a3 vendorId:(long long)a4 productId:(long long)a5 ecid:(id)a6 chipId:(id)a7 serialNumber:(id)a8;
- (void)updateWithSeed:(id)a0 collaborativeKeyC2:(id)a1 serverSignature:(id)a2 serverPublicKey:(id)a3 maskedAppleID:(id)a4 userMessage:(id)a5 baaIntermediateCert:(id)a6 baaLeafCert:(id)a7;

@end
