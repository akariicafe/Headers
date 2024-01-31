@class HDSyncIdentityEntity, HDSyncIdentity;

@interface HDConcreteSyncIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HDSyncIdentity *identity;
@property (readonly, copy, nonatomic) HDSyncIdentityEntity *entity;
@property (readonly, nonatomic) BOOL isChild;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
