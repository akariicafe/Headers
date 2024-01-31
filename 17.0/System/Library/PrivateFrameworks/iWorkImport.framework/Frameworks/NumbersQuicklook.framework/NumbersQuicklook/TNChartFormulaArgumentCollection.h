@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {
    NSArray *_array;
}

@property (nonatomic) BOOL storeBadRef;

+ (id)argumentCollectionFromFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2;
+ (id)argumentCollectionFromFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2 storeBadRef:(BOOL)a3;
+ (id)evalArgumentCollectionFromFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2;

- (unsigned long long)components;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (id)firstElement;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastElement;
- (id)elementEnumerator;
- (id)initWithFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2;
- (id)initWithFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2 storeBadRef:(BOOL)a3;
- (id)reverseElementEnumerator;
- (id)wrappedChartFormulaWithID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 andLocale:(id)a1;

@end
