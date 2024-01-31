@class NSData, NSString, CKRecordID, CKDZonePCSData, CKDChainPCSData, CKEncryptedData, CKRecordZoneID, CKDSharePCSData;

@interface CKDRecordPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) CKRecordID *parentID;
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData;
@property (retain, nonatomic) NSData *chainParentPublicKeyID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSData *zoneishPublicKeyID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;
@property (retain, nonatomic) CKRecordID *shareID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *signingPCS;
@property (retain, nonatomic) CKDChainPCSData *chainPCSData;
@property (retain, nonatomic) CKEncryptedData *encryptedPublicSharingKey;

+ (id)dataWithRecord:(id)a0;

- (void)setPcs:(struct _OpaquePCSShareProtection { } *)a0;
- (id)itemID;
- (BOOL)shouldEncodePCSData;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithPCSData:(id)a0 recordID:(id)a1;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
