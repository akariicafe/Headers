@interface SCRCIndexMap : NSObject <NSCopying, NSSecureCoding> {
    struct __CFDictionary { } *_map;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)indexes;
- (id)init;
- (id)objectForIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)count;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)a0;
- (id)_initAndDeepCopyIndexMap:(id)a0;
- (id)_initWithIndexMap:(id)a0;
- (void)addObjectsFromIndexMap:(id)a0;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(const id *)a0 andIndexes:(unsigned long long *)a1 count:(unsigned long long)a2;
- (void)removeObjectForIndex:(unsigned long long)a0;

@end
