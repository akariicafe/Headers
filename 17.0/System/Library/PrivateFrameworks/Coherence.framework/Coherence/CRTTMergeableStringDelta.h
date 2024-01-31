@class ObjCVersion;
@protocol CRTTMergeableStringStorage;

@interface CRTTMergeableStringDelta : NSObject {
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> { struct TopoSubstring **__begin_; struct TopoSubstring **__end_; struct __compressed_pair<TopoSubstring **, std::allocator<TopoSubstring *>> { struct TopoSubstring **__value_; } __end_cap_; } orderedSubstrings;
}

@property (readonly, nonatomic) id<CRTTMergeableStringStorage> attributedString;
@property (retain, nonatomic) ObjCVersion *fromVersion;
@property (retain, nonatomic) ObjCVersion *fromAddedByVersion;
@property (retain, nonatomic) ObjCVersion *version;
@property (retain, nonatomic) ObjCVersion *addedByVersion;
@property (nonatomic) long long renameGeneration;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dotDescription:(unsigned long long)a0;
- (void *)orderedSubstrings;
- (void)addStorageTo:(void *)a0 fromStorage:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)addChildTo:(const void *)a0 child:(const void *)a1 deltaCharMap:(void *)a2;
- (void *)addSubstring:(const struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; } *)a0 requiresExactLength:(BOOL)a1 deltaCharMap:(void *)a2;
- (void)compareSameSubstring:(const void *)a0 toSubstring:(const void *)a1 from:(id)a2 toString:(id)a3 charMap:(const void *)a4 deltaCharMap:(void *)a5 compareElements:(id /* block */)a6;
- (void)compareSubstring:(const void *)a0 toSubstring:(const void *)a1 fromString:(id)a2 toString:(id)a3 charMap:(const void *)a4 deltaCharMap:(void *)a5 compareElements:(id /* block */)a6;
- (void)findAndCompareSubstring:(const void *)a0 from:(id)a1 toString:(id)a2 charMap:(const void *)a3 deltaCharMap:(void *)a4 compareElements:(id /* block */)a5;
- (id)initWithDecoder:(id)a0 error:(id *)a1;
- (id)initWithDeltasTo:(id)a0 from:(id)a1 compareElements:(id /* block */)a2;
- (BOOL)saveToEncoder:(id)a0 error:(out id *)a1;

@end
