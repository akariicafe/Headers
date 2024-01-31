@class NSMapTable;

@interface RBBundlePropertiesBSXPCProvider : NSObject {
    NSMapTable *_propertiesByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (id)propertiesForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)removePropertiesForIdentifier:(id)a0;

@end
