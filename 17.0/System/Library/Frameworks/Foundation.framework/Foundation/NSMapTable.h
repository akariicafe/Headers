@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)weakToStrongObjectsMapTable;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)strongToWeakObjectsMapTable;
+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)weakToWeakObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;

- (id)objectEnumerator;
- (id)enumerator;
- (id)allValues;
- (id)init;
- (id)allKeys;
- (void)removeAllItems;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)copy;
- (void)removeObjectForKey:(id)a0;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (Class)classForCoder;
- (id)description;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (unsigned long long)__capacity;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (id)dictionaryRepresentation;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (void)setItem:(const void *)a0 forKey:(const void *)a1;
- (id)mutableDictionary;

@end
