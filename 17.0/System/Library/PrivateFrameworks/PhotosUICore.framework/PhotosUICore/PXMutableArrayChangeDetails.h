@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {
    BOOL _isNonIncremental;
}

+ (id)changeDetailsWithNoIncrementalChanges;
+ (BOOL)_mutableCopyInputs;

- (void)_updateChangedIndexesWithChangeDetails:(id)a0;
- (void)addChangeDetails:(id)a0;
- (void)_becomeNonIncremental;
- (void)_addAdditionalRemovedIndex:(unsigned long long)a0 afterChangesIndex:(unsigned long long)a1;
- (void)_addAdditionalRemovedIndexSet:(id)a0 afterChangesIndex:(id)a1;
- (void)_updatePropertyChangesWithChangeDetails:(id)a0;
- (void)_addInsertedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasIncrementalChanges;
- (void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)a0;
- (void)_addRemovedIndex:(unsigned long long)a0;
- (void)_addInsertedIndexes:(id)a0;
- (void)_updateMovesWithChangesDetails:(id)a0;
- (void)_addRemovedIndexes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
