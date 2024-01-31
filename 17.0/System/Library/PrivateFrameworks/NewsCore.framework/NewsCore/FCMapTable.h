@class NSString, NSMapTable, NSPointerFunctions;

@interface FCMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration> {
    NSMapTable *_mapTable;
    NSString *_keyClassName;
    NSString *_valueClassName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)weakToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)weakToWeakObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;

- (id)objectEnumerator;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)addObjectsFromMapTable:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (id)initWithMapTable:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
