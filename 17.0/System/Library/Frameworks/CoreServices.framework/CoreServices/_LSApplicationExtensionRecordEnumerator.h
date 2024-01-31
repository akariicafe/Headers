@class NSString, LSExtensionPointRecord, LSPropertyList;

@interface _LSApplicationExtensionRecordEnumerator : _LSRecordEnumerator {
    NSString *_extensionPointID;
    unsigned int _platform;
    LSExtensionPointRecord *_extensionPointRecord;
    unsigned long long _options;
    id /* block */ _filterBlock;
    LSPropertyList *_propertyList;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _plugins;
}

- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (id)initWithExtensionPointIdentifier:(id)a0 options:(unsigned long long)a1 filter:(id /* block */)a2;
- (BOOL)_getExtensionPointID:(unsigned int *)a0 context:(struct LSContext { id x0; } *)a1 error:(id *)a2;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id).cxx_construct;
- (id)initWithExtensionPoint:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtensionPointIdentifier:(id)a0 options:(unsigned long long)a1 platform:(unsigned int)a2 filter:(id /* block */)a3;
- (id)initWithExtensionPointIdentifier:(id)a0 options:(unsigned long long)a1 platform:(unsigned int)a2;
- (void).cxx_destruct;
- (id)initWithExtensionPointIdentifier:(id)a0 options:(unsigned long long)a1;
- (BOOL)_evaluatePluginNoIO:(unsigned int)a0 data:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a1 extensionPointID:(unsigned int)a2 context:(struct LSContext { id x0; } *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
