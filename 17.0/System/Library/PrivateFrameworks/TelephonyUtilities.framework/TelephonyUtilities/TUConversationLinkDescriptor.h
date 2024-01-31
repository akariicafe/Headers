@class NSUUID, NSSet, NSString, NSDate, TUConversationLinkOriginator, NSData;

@interface TUConversationLinkDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *deletionDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSSet *invitedHandles;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TUConversationLinkOriginator *originator;
@property (copy, nonatomic) NSData *privateKey;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) int version;
@property (nonatomic) long long linkLifetimeScope;

- (unsigned long long)hash;
- (id)initWithGroupUUID:(id)a0 originator:(id)a1 pseudonym:(id)a2 publicKey:(id)a3;
- (id)initWithConversationLinkDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToConversationLinkDescriptor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
