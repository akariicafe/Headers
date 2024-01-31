@class NSDictionary;

@interface REMMemberships : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *membershipByMemberIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMemberships:(id)a0;
- (id)mergingWith:(id)a0 mergePolicy:(unsigned long long)a1;
- (id)excludingObsoleteAndModifiedEarlierThan:(id)a0;
- (id)groupIdentifierOfMemberWithIdentifier:(id)a0;
- (id)initWithMembershipByMemberIdentifier:(id)a0;

@end
