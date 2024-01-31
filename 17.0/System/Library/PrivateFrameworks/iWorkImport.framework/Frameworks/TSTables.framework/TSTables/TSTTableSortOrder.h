@class NSIndexSet, NSArray;

@interface TSTTableSortOrder : NSObject <NSCopying>

@property (retain, nonatomic) NSIndexSet *cachedIndexes;
@property (readonly, nonatomic) NSArray *rules;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSIndexSet *baseColumnIndices;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) unsigned long long ruleCount;

+ (id)sortOrderWithBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 direction:(int)a1 type:(int)a2;
+ (id)sortOrderWithRules:(id)a0 type:(int)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (id)sortOrderByRemovingRuleAtIndex:(unsigned long long)a0;
- (BOOL)containsAnyRulesInBaseColumns:(id)a0;
- (id)initWithRules:(id)a0 type:(int)a1;
- (id)sortOrderByAddingRule:(id)a0;
- (id)sortOrderByChangingTypeTo:(int)a0;
- (id)sortOrderByRemovingBaseColumnIndices:(id)a0;
- (id)sortOrderByReplacingRuleAtIndex:(unsigned long long)a0 withRule:(id)a1;
- (id)sortOrderByReplacingRulesWithRules:(id)a0;

@end
