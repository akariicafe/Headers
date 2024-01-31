@class NSArray;

@interface TSTTableGroupSortOrderUID : TSKSosBase

@property (readonly, nonatomic) NSArray *groupSortRules;
@property (readonly, nonatomic) unsigned long long ruleCount;

+ (id)groupSortOrderWithRules:(id)a0 withTableInfo:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (BOOL)containsAnyRulesInColumnUIDList:(const void *)a0;
- (id)groupSortOrderByRemovingColumnUIDs:(const void *)a0 tableInfo:(id)a1;
- (id)groupSortOrderByReplacingRuleAtIndex:(unsigned long long)a0 withRule:(id)a1 withTableInfo:(id)a2;
- (id)groupSortOrderWithTableInfo:(id)a0;
- (id)groupSortRulesForLevel:(unsigned char)a0 tableInfo:(id)a1;
- (id)initWithGroupRules:(id)a0 withTableInfo:(id)a1;
- (void)sortRulesWithTableInfo:(id)a0;

@end
