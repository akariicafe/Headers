@class FCMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) FCMapTable *backingMapTable;

- (id)objectEnumerator;
- (id)init;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)keyEnumerator;
- (id)objectsForKey:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_setForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
