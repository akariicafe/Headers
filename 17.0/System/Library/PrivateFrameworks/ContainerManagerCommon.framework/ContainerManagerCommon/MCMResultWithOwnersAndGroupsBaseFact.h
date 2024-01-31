@interface MCMResultWithOwnersAndGroupsBaseFact : NSObject

@property (readonly, nonatomic) unsigned long long ownerIndex;
@property (readonly, nonatomic) unsigned long long groupIndex;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithOwnerIndex:(unsigned long long)a0 groupIndex:(unsigned long long)a1;

@end
