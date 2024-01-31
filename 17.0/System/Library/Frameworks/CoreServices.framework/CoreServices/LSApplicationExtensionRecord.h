@class LSBundleRecord, NSDictionary, NSString, LSPlugInKitProxy, NSUUID, LSExtensionPointRecord;

@interface LSApplicationExtensionRecord : LSBundleRecord {
    LSBundleRecord *_weakContainingBundleRecord;
}

@property (readonly) NSDictionary *iconDictionary;
@property (readonly) LSBundleRecord *_containingBundleRecord;
@property (readonly, nonatomic) LSPlugInKitProxy *compatibilityObject;
@property (readonly) NSString *effectiveBundleIdentifier;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly) LSExtensionPointRecord *extensionPointRecord;

+ (BOOL)supportsSecureCoding;
+ (id)applicationExtensionRecordsForUUIDs:(id)a0 outContainingBundleRecords:(id *)a1 error:(id *)a2;
+ (id)enumeratorWithExtensionPointRecord:(id)a0 options:(unsigned long long)a1;
+ (id)enumeratorWithOptions:(unsigned long long)a0;
+ (id)_propertyClasses;

- (id)supportedIntents;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (char)developerType;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_personasWithAttributes;
- (id)associatedPersonas;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)managedPersonas;
- (id)supportedIntentMediaCategories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_containerClass;
- (id)_initWithUUID:(id)a0 node:(id)a1 bundleIdentifier:(id)a2 context:(struct LSContext { id x0; } *)a3 requireValid:(BOOL)a4 error:(id *)a5;
- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 requireValid:(BOOL)a1 error:(id *)a2;
- (void)_LSRecord_resolve__containingBundleRecord;
- (void)_LSRecord_resolve_effectiveBundleIdentifier;
- (void)_LSRecord_resolve_extensionPointRecord;
- (void)_LSRecord_resolve_iconDictionary;
- (void)_LSRecord_resolve_uniqueIdentifier;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (BOOL)_containerized;
- (id)_containingBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a3;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 pluginID:(unsigned int)a1 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a2 error:(id *)a3;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 pluginID:(unsigned int)a1 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a2 extensionPointRecord:(id)a3 error:(id *)a4;
- (id)_initWithUUID:(id)a0 node:(id)a1 bundleIdentifier:(id)a2 platform:(unsigned int)a3 context:(struct LSContext { id x0; } *)a4 requireValid:(BOOL)a5 error:(id *)a6;
- (id)_intentsArrayForKey:(id)a0;
- (id)_replacementObjectForResolvedPropertyValue:(id)a0 forGetter:(SEL)a1 encoder:(id)a2;
- (BOOL)_usesSystemPersona;
- (unsigned long long)compatibilityState;
- (id)effectiveBundleIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a3;
- (id)extensionPointRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a3;
- (id)iconDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a3;
- (id)initWithBundleIdentifier:(id)a0 requireValid:(BOOL)a1 error:(id *)a2;
- (id)initWithBundleIdentifier:(id)a0 requireValid:(BOOL)a1 platform:(unsigned int)a2 error:(id *)a3;
- (id)initWithUUID:(id)a0 error:(id *)a1;
- (id)initWithUUID:(id)a0 requireValid:(BOOL)a1 error:(id *)a2;
- (id)uniqueIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a3;

@end
