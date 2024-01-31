@interface _UTTaggedType : UTType

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (id)referenceURL;
- (BOOL)isDeclared;
- (BOOL)isDynamic;
- (id)tags;
- (id)version;
- (id)identifier;
- (id)localizedDescription;
- (Class)classForCoder;
- (id)_typeRecord;
- (BOOL)conformsToType:(id)a0;
- (id)_localizedDescriptionDictionary;
- (id)_childTypes;
- (id)_subtypes;
- (BOOL)_isExported;
- (BOOL)_isImported;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)_isCoreType;
- (BOOL)_isWildcard;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_parentTypes;
- (id)_preferredTagOfClass:(id)a0;
- (BOOL)isPublicType;
- (id)supertypes;

@end
