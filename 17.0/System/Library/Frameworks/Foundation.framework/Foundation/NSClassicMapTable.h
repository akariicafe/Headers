@interface NSClassicMapTable : NSMapTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; void *notAKeyMarker; } _keyCallBacks;
    struct { void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _valueCallBacks;
    struct __CFBasicHash { } *_ht;
}

- (id)allValues;
- (id)init;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllItems;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (unsigned long long)count;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)copy;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (void)_reclaim;
- (BOOL)isEqual:(id)a0;
- (id)objectForKey:(id)a0;

@end
