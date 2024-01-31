@class NSString;

@interface EFInt64Set : NSObject <NSCopying, NSMutableCopying> {
    struct set<long long, std::less<long long>, std::allocator<long long> > { struct __tree<long long, std::less<long long>, std::allocator<long long> > { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long long, void *> > > { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<long long> > { unsigned long long __value_; } __pair3_; } __tree_; } _underlying;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long firstIndex;
@property (readonly, nonatomic) long long lastIndex;
@property (readonly, copy, nonatomic) NSString *commaSeparatedString;

+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;

- (id)init;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsIndex:(long long)a0;
- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a2;
- (long long)indexGreaterThanIndex:(long long)a0;
- (id)indexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;
- (unsigned long long)_enumerateIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a0 maxCount:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)_initWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;
- (id)_initWithUnderlyingSet:(const void *)a0;
- (id)lowestIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0 maxCount:(unsigned long long)a1;

@end
