@class NSDictionary, NSDate;

@interface REMTextMemberships : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *memberships;
@property (readonly, nonatomic) NSDate *lastResetDate;

- (void)reset;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMemberships:(id)a0;
- (id)initWithMemberships:(id)a0 lastResetDate:(id)a1;
- (id)groupIdentifierOfMemberWithIdentifier:(id)a0;
- (id)mergingWith:(id)a0;

@end
