@class NSMutableArray;

@interface NTKPigmentEditOptionArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_backing;
}

@property (readonly) unsigned long long equality;
@property (readonly) unsigned long long count;

+ (id)array;
+ (id)arrayWithEquality:(unsigned long long)a0;

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (unsigned long long)indexOfPigment:(id)a0;
- (id)pigmentAtIndex:(unsigned long long)a0;
- (void)addPigment:(id)a0;
- (BOOL)containsPigment:(id)a0;
- (void)enumeratePigmentsUsingBlock:(id /* block */)a0;
- (void)enumeratePigmentsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithEquality:(unsigned long long)a0;
- (void)insertPigment:(id)a0 atIndex:(unsigned long long)a1;
- (id)pigmentForPigment:(id)a0;
- (void)removePigment:(id)a0;
- (void)removePigmentAtIndex:(unsigned long long)a0;

@end
