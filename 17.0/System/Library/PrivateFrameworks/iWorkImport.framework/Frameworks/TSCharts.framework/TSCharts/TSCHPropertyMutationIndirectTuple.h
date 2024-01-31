@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long index;

- (id)initWithStyleOwner:(id)a0 mutations:(id)a1;
- (id)indirectTuple;
- (id)initWithStyleOwnerType:(int)a0 index:(unsigned long long)a1 inChart:(id)a2 mutations:(id)a3;
- (id)styleOwner;
- (id)styleOwnerRef;

@end
