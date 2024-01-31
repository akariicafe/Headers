@class NSEnumerator, NSArray, NSIndexSet, NSDictionary;
@protocol NSFastEnumeration;

@interface PXStackedDataSection : PXDataSection {
    NSArray *_childDataSectionsStartIndexes;
    NSIndexSet *_nonEmptyChildDataSectionsStartIndexSet;
    NSDictionary *_nonEmptyChildDataSectionsIndexMap;
    NSEnumerator *_childDataSectionsEnumerator;
    id<NSFastEnumeration> _currentEnumerator;
    unsigned long long _enumerationMutations;
    unsigned long long *_currentEnumeratorMutationsPtr;
    long long _count;
}

@property (readonly, copy, nonatomic) NSArray *childDataSections;

+ (id)dataSectionForAssetsInCollections:(id)a0;

- (id)objectAtIndex:(long long)a0;
- (long long)count;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)_nextEnumerator;
- (void)_resetEnumerationState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0;
- (long long)indexOfChildDataSourceForObjectAtIndex:(long long)a0 localIndex:(long long *)a1;
- (id)initWithChildDataSections:(id)a0 outlineObject:(id)a1;
- (long long)itemStartIndexForChildDataSourceAtIndex:(long long)a0;

@end
