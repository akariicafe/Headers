@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_valueMap;
}

- (id)init;
- (id)allIdentities;
- (BOOL)containsIdentity:(id)a0;
- (void)removeAllObjects;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)dictionary;
- (id)setValue:(id)a0 forIdentity:(id)a1;
- (unsigned long long)count;
- (id)removeValueForIdentity:(id)a0 withPredicate:(id /* block */)a1;
- (void)addIdentity:(id)a0;
- (id)removeValueForIdentity:(id)a0;
- (void).cxx_destruct;
- (void)removeIdentity:(id)a0;
- (id)allValue;
- (id)valueForIdentity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
