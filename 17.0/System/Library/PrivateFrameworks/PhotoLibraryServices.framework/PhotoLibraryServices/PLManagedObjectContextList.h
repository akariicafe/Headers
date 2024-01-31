@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_contexts;
}

- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)a0;
- (id)allContextsNotIdenticalTo:(id)a0;
- (id)allContexts;

@end
