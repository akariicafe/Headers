@interface TSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)objectEnumerator;
- (id)init;
- (id)member:(id)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (id)setByAddingObjectsFromSet:(id)a0;
- (void)getObjects:(id *)a0;
- (id)allObjects;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (id)setByAddingObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
