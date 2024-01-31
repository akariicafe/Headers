@interface MPMutableSectionedCollection : MPSectionedCollection

- (void)insertSection:(id)a0 atIndex:(long long)a1;
- (void)removeAllObjects;
- (void)removeItemAtIndexPath:(id)a0;
- (void)appendItem:(id)a0;
- (void)replaceSectionAtIndex:(long long)a0 withObject:(id)a1;
- (void)replaceSectionsUsingBlock:(id /* block */)a0;
- (void)replaceItemsUsingBlock:(id /* block */)a0;
- (void)insertItem:(id)a0 atIndexPath:(id)a1;
- (void)appendItems:(id)a0;
- (void)replaceObjectAtIndexPath:(id)a0 withObject:(id)a1;
- (void)moveSectionFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)appendSection:(id)a0;
- (void)removeSectionAtIndex:(long long)a0;
- (void)moveItemFromIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)_initializeAsEmptySectionedCollection;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
