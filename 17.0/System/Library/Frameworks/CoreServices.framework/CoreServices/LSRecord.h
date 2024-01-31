@class _LSDatabase, NSArray, NSUUID, NSURL, NSData;

@interface LSRecord : NSObject <LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent> {
    void *_resolvedProperties;
    struct LSContext { _LSDatabase *db; } _context;
    unsigned int _unitID;
    unsigned short _tableID : 16;
    unsigned short _discardableContentCounter : 14;
    unsigned char _intentionallyInvalid : 1;
    unsigned char _shared : 1;
}

@property (class, readonly) NSArray *_propertyClasses;
@property (class, readonly) BOOL hasDatabaseAccess;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *visualizerURL;
@property (readonly) NSUUID *databaseUUID;
@property (nonatomic, getter=_isShared, setter=_setShared:) BOOL _shared;
@property (readonly, nonatomic) id compatibilityObject;
@property (readonly) NSData *persistentIdentifier;

+ (void)initialize;
+ (id)new;
+ (void)resolveAllPropertiesOfRecords:(id)a0 andDetachOnQueue:(id)a1;
+ (void)resolveAllPropertiesOfRecords:(const id *)a0 count:(unsigned long long)a1 andDetachOnQueue:(id)a2;

- (id)init;
- (void)dealloc;
- (void)detach;
- (void)encodeWithCoder:(id)a0;
- (void)discardContentIfPossible;
- (id).cxx_construct;
- (unsigned int)tableID;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (BOOL)beginContentAccess;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attributedDescription;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_ifAttached:(id /* block */)a0 else:(id /* block */)a1;
- (id)_initInvalid;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifier:(id)a1;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2;
- (void)_performBlockWithContext:(id /* block */)a0;
- (id)_propertyClassesForCoding;
- (void)_removeResolvedPropertyValueForGetter:(SEL)a0;
- (id)_replacementObjectForResolvedPropertyValue:(id)a0 forGetter:(SEL)a1 encoder:(id)a2;
- (void)_resolveAllProperties;
- (id)_resolvedPropertyValueForGetter:(SEL)a0;
- (id)_resolvedPropertyValueForGetter:(SEL)a0 nullPlaceholder:(id)a1;
- (const void *)_resolvingMethods;
- (void)_setResolvedPropertyValue:(id)a0 forGetter:(SEL)a1;
- (id)initWithPersistentIdentifier:(id)a0;
- (void)resolveAllPropertiesAndDetachOnQueue:(id)a0;
- (unsigned int)unitID;

@end
