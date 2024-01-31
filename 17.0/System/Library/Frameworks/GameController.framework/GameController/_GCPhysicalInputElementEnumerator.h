@class GCPhysicalInputElementCollection;

@interface _GCPhysicalInputElementEnumerator : NSEnumerator {
    GCPhysicalInputElementCollection *_collection;
    unsigned long long _currentIndex;
}

- (id)init;
- (id)nextObject;
- (void).cxx_destruct;

@end
