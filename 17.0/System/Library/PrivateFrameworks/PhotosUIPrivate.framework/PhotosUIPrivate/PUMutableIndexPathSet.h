@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet *_indexPaths;
}

- (id)init;
- (unsigned long long)hash;
- (void)addIndexPath:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (long long)count;
- (id)description;
- (void).cxx_destruct;
- (void)removeIndexPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeAllIndexPaths;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (void)setIndexPathSet:(id)a0;

@end
