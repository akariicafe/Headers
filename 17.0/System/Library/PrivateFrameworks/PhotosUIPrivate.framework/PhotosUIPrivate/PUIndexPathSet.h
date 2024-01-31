@interface PUIndexPathSet : NSObject <NSCopying, NSMutableCopying>

- (long long)count;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;

@end
