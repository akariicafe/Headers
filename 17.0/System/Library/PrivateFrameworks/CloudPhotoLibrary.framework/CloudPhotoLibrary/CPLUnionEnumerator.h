@class NSMutableArray;
@protocol NSFastEnumeration;

@interface CPLUnionEnumerator : NSObject <NSFastEnumeration> {
    id /* block */ _generatorArray[2];
    NSMutableArray *_remainingGenerators;
    unsigned long long _currentGeneratorIndex;
    id<NSFastEnumeration> _currentEnumerator;
    void *_currentEnumeratorMutationsPtr;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithEnumerators:(id)a0;
- (void)_prepareNextEnumeratorWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0;
- (id)initWithEnumeratorGenerators:(id)a0;

@end
