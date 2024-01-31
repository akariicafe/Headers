@class NSString, CKRecordID, NSData, NSDate;

@interface CKDSharePCSData : CKDPCSData <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) NSDate *shareModificationDate;
@property (nonatomic) unsigned long long serviceType;
@property (retain, nonatomic) NSString *shareEtag;
@property (nonatomic) long long publicPermission;
@property (nonatomic) long long myParticipantRole;
@property (nonatomic) long long myParticipantPermission;
@property (nonatomic) struct _OpaquePCSShareProtection { } *myParticipantPCS;
@property (copy, nonatomic) NSData *myParticipantPCSData;
@property (nonatomic) struct _OpaquePCSShareProtection { } *invitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection { } *preKeyRollInvitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection { } *publicPCS;
@property (copy, nonatomic) NSString *publicPCSEtag;
@property (copy, nonatomic) NSData *publicPCSData;

+ (id)dataWithShare:(id)a0 serviceType:(unsigned long long)a1;
+ (id)dataWithShareID:(id)a0 pcsData:(id)a1;

- (id)itemID;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithShareID:(id)a0 pcsData:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
