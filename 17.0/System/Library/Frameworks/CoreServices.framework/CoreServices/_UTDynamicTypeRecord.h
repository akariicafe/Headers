@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (id)referenceURL;
- (id)_declaringBundleBookmark;
- (BOOL)isDeclared;
- (BOOL)isWildcard;
- (id)declaration;
- (BOOL)isCoreType;
- (id)parentTypeIdentifiers;
- (id)pedigree;
- (BOOL)isExported;
- (BOOL)isDynamic;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_delegatePath;
- (id)version;
- (BOOL)isImported;
- (void)_LSRecord_resolve_pedigree;
- (id)identifier;
- (id)_localizedDescription;
- (BOOL)isChildOfTypeIdentifier:(id)a0;
- (id)tagSpecification;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 dynamicUTI:(id)a1;
- (BOOL)isInPublicDomain;
- (void).cxx_destruct;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)preferredTagOfClass:(id)a0;
- (id)declaringBundleRecord;
- (BOOL)isActive;
- (id)childTypeIdentifiers;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
