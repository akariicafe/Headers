@class NSMutableOrderedSet;

@interface SUUISettingsObjectStore : NSObject {
    NSMutableOrderedSet *_allObjects;
    BOOL _dirty;
    NSMutableOrderedSet *_visibleObjects;
}

- (id)init;
- (unsigned long long)indexOfObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)allObjects;
- (id)description;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (unsigned long long)numberOfObjects;
- (void)_updateVisibleOrder;
- (void)addObject:(id)a0 hidden:(BOOL)a1;
- (void)enumerateObjects:(id /* block */)a0;
- (void)enumerateVisibleObjects:(id /* block */)a0;
- (void)hideObject:(id)a0;
- (unsigned long long)indexOfVisibleObject:(id)a0;
- (unsigned long long)numberOfVisibleObjects;
- (BOOL)objectIsVisible:(id)a0;
- (void)revealObject:(id)a0;
- (id)visibleObjectAtIndex:(unsigned long long)a0;

@end
