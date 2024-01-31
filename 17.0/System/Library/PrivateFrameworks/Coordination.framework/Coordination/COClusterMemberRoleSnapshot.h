@class COClusterMember, COClusterRole;

@interface COClusterMemberRoleSnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isStale) BOOL stale;
@property (readonly, nonatomic) COClusterMember *member;
@property (readonly, nonatomic) COClusterRole *role;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSnapshot:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMember:(id)a0 role:(id)a1;

@end
