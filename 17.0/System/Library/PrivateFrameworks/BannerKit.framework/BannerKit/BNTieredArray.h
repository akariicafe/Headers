@class NSArray, NSMutableArray;

@interface BNTieredArray : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray *_collections;
    NSArray *_allObjects;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long tierCount;
@property (readonly, nonatomic) id topObject;
@property (readonly, nonatomic) NSArray *topObjectFromEachTier;
@property (readonly, nonatomic) NSArray *allObjects;

- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForObject:(id)a0;
- (void)_invalidateAllObjectsCache;
- (void)addObject:(id)a0 incrementingTier:(BOOL)a1;
- (void)insertObject:(id)a0 beneathObject:(id)a1;
- (void)removeObjectAtIndexPath:(id)a0;
- (id)tierAtIndex:(unsigned long long)a0;
- (id)topObjectInTier:(long long)a0;

@end
