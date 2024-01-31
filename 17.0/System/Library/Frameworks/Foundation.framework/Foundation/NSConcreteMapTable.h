@interface NSConcreteMapTable : NSMapTable {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } keys;
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } growLock;
    BOOL shouldRehash;
    BOOL hasDynamicSlices;
}

+ (BOOL)supportsSecureCoding;

- (id)objectEnumerator;
- (id)allValues;
- (id)dump;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllItems;
- (unsigned long long)realCount;
- (void)grow;
- (id)keyEnumerator;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (unsigned long long)count;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)copy;
- (void)removeObjectForKey:(id)a0;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (void)assign:(unsigned long long)a0 key:(const void *)a1 value:(const void *)a2 isNew:(BOOL)a3;
- (id)description;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (unsigned long long)__capacity;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (id)keyPointerFunctions;
- (void)_reclaim;
- (void)_setBackingStore;
- (BOOL)containsKeys:(const void **)a0 values:(const void **)a1 count:(unsigned long long)a2;
- (void)checkCount:(const char *)a0;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (void)raiseCountUnderflowException;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (void)rehash;
- (id)initWithCoder:(id)a0;
- (id)valuePointerFunctions;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;

@end
