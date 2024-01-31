@class NSMutableDictionary, NSMutableArray;

@interface RESortedDictionary : NSObject <NSCopying> {
    NSMutableDictionary *_values;
    NSMutableArray *_order;
}

@property (readonly) unsigned long long count;

- (id)init;
- (unsigned long long)hash;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
