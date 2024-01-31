@class NSMutableDictionary;

@interface VisionCoreObjectCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSMutableDictionary *_objects;
}

- (id)init;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)objectForIdentifier:(id)a0 creationBlock:(id /* block */)a1 error:(id *)a2;

@end
