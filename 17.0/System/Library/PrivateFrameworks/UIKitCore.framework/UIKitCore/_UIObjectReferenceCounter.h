@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet *_objectReferences;
}

- (void)decrementReferenceForObject:(id)a0 invalidationHandler:(id /* block */)a1;
- (id)allObjects;
- (void).cxx_destruct;
- (void)incrementReferenceForObject:(id)a0;

@end
