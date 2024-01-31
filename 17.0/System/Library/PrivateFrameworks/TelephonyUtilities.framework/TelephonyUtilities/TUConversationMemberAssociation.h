@class NSString, TUHandle, NSData;

@interface TUConversationMemberAssociation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (readonly, copy, nonatomic) NSData *messagingData;

+ (id)associationForHandle:(id)a0 from:(id)a1;
+ (id)messagingDataWithType:(long long)a0 primaryHandle:(id)a1 primaryIdentifier:(unsigned long long)a2 primaryAvcIdentifier:(id)a3 associatedPseudonym:(id)a4 conversationGroupUUIDString:(id)a5;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHandle:(id)a0 type:(long long)a1 primary:(BOOL)a2;
- (id)initWithMemberAssociation:(id)a0;
- (BOOL)isEqualToAssociation:(id)a0;

@end
