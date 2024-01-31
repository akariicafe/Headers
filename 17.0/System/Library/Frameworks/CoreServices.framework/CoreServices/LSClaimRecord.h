@class LSBundleRecord, NSDictionary, NSURL, NSString, _LSLocalizedStringRecord, NSArray;

@interface LSClaimRecord : LSRecord {
    LSBundleRecord *_weakClaimingBundleRecord;
}

@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) _LSLocalizedStringRecord *_localizedName;
@property (readonly) LSBundleRecord *_claimingBundleRecord;
@property (readonly, nonatomic) id compatibilityObject;
@property (readonly) NSString *localizedName;
@property (readonly) NSArray *typeIdentifiers;
@property (readonly) BOOL defaultShareModeCollaboration;
@property (readonly) NSArray *URLSchemes;
@property (readonly) NSString *handlerRank;
@property (readonly) unsigned int role;
@property (readonly) LSBundleRecord *claimingBundleRecord;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void).cxx_destruct;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_flags;
- (id)URLSchemesWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (void)_LSRecord_resolve_URLSchemes;
- (void)_LSRecord_resolve__claimingBundleRecord;
- (void)_LSRecord_resolve__flags;
- (void)_LSRecord_resolve__localizedName;
- (void)_LSRecord_resolve_handlerRank;
- (void)_LSRecord_resolve_iconDictionary;
- (void)_LSRecord_resolve_iconResourceBundleURL;
- (void)_LSRecord_resolve_role;
- (void)_LSRecord_resolve_typeIdentifiers;
- (id)_claimingBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (unsigned long long)_flagsWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)_localizedNameWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)handlerRankWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)iconDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)iconResourceBundleURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (unsigned int)roleWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)typeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;

@end
