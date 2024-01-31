@class NSArray;

@interface TSTTableFilterSet : TSPObject <TSPCopying> {
    int _type;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _filterOffsets;
}

@property (retain, nonatomic) NSArray *rules;
@property (readonly, nonatomic) unsigned long long filterCount;
@property (readonly, nonatomic) unsigned long long ruleCount;
@property (readonly, nonatomic) BOOL canAddRules;
@property (readonly, nonatomic) unsigned long long newFilterIndex;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) int filterSetType;
@property (nonatomic) BOOL needsFormulaRewriteForImport;
@property (nonatomic) BOOL downgradedForPrePivot;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)a0 matchingCell:(id)a1;
- (id)removeRulesWithAbsoluteIndices:(id)a0;
- (id)absoluteRuleIndicesForColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 inTable:(id)a1;
- (void)addRules:(id)a0 inFilter:(unsigned long long)a1;
- (id)baseColumnIndicesForRulesInTable:(id)a0;
- (BOOL)containsFilterRulesInUIDForm;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)a0 withTableInfo:(id)a1;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)a0 withTableInfo:(id)a1;
- (id)copyByRewritingFilterRulesWithContext:(id)a0 fromTableModel:(id)a1 toTableModel:(id)a2;
- (id)downgradeFilterSetForBackwardCompatWithLocale:(id)a0;
- (void)enumerateFilterIndicesInTable:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateFiltersForColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 withTable:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateFiltersInTable:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateRulesInFilterIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)filterAtIndex:(unsigned long long)a0 inTable:(id)a1;
- (id)filterIndicesForBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 inTable:(id)a1;
- (unsigned long long)firstFilterIndexForBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 inTable:(id)a1;
- (id)initWithFilterRules:(id)a0 type:(int)a1 context:(id)a2;
- (id)initWithNotBlankColumnGroupsWithContext:(id)a0 withPivotTable:(id)a1;
- (id)initWithNotBlankRowGroupsWithContext:(id)a0 withPivotTable:(id)a1;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)a0;
- (void)p_addRules:(id)a0 atRuleIndices:(id)a1 inFilter:(unsigned long long)a2 isNew:(BOOL)a3;
- (id)p_downgradedFilterRuleForListItem:(id)a0 fromPredicate:(id)a1;
- (BOOL)p_thresholdComparisonMatchesFilter:(long long)a0 withPredicateType:(unsigned char)a1;
- (BOOL)preventsRowInsertion;
- (void)removeRulesForBaseColumnIndices:(id)a0 withTableInfo:(id)a1;
- (void)removeRulesWithIndices:(id)a0 inFilter:(unsigned long long)a1;
- (void)replaceRule:(id)a0 atRuleIndex:(unsigned long long)a1 inFilter:(unsigned long long)a2;
- (void)replaceRuleAtAbsoluteIndex:(unsigned long long)a0 withRule:(id)a1;
- (BOOL)rowIsShown:(unsigned int)a0 withHiddenStateExtent:(id)a1 withCalcEngine:(id)a2;
- (id)ruleAtAbsoluteIndex:(unsigned long long)a0;
- (id)ruleInFilter:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)viewColumnIndicesForRulesInTable:(id)a0;

@end
