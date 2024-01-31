@class NSArray;

@interface HDSimpleGraphNode : HDSimpleGraphObject

@property (readonly, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) NSArray *relationships;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRowID:(long long)a0 attributes:(id)a1 relationships:(id)a2;
- (id)initWithRowID:(long long)a0 attributes:(id)a1 relationships:(id)a2 version:(long long)a3 slots:(unsigned long long)a4 deleted:(BOOL)a5;

@end
