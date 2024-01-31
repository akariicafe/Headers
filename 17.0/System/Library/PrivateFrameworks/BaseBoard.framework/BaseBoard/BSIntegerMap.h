@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_mapTable;
    id _zeroIndexValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)allValues;
- (id)init;
- (unsigned long long)hash;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)description;
- (BOOL)containsObjectForKey:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateKeysWithBlock:(id /* block */)a0;

@end
