@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *_objectsByTileIdentifier;
@property (readonly, nonatomic) BOOL useUniqueLeafs;

- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0 withTileIdentifier:(id)a1;
- (void)addObject:(id)a0 withTileIdentifier:(id)a1;
- (id)initUsingUniqueLeafs:(BOOL)a0;
- (id)description;
- (void)removeObjectWithTileIdentifier:(id)a0;
- (id)initWithTileTree:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0 withTileIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectWithTileIdentifier:(id)a0;
- (void)enumerateObjectsWithTileIdentifier:(id)a0 usingBlock:(id /* block */)a1;

@end
