@class GCPhysicalInputElementCollection, NSArray, Protocol;

@interface _GCPhysicalInputFilteredElementCollection : GCPhysicalInputElementCollection {
    GCPhysicalInputElementCollection *_backingCollection;
    Protocol *_filter;
    NSArray *_cached_filteredElements;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)elementEnumerator;
- (id)elementForAlias:(id)a0;

@end
