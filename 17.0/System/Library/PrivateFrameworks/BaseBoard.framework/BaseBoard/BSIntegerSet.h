@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {
    NSHashTable *_hashTable;
    BOOL _hasZeroValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (unsigned long long)hash;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)containsValue:(long long)a0;
- (id)description;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateSortedWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
