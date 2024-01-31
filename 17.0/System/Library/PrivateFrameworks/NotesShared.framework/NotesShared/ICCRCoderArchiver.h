@class NSMutableOrderedSet;

@interface ICCRCoderArchiver : ICCRCoder {
    struct vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>> { struct Document_DocObject **__begin_; struct Document_DocObject **__end_; struct __compressed_pair<CRDT::Document_DocObject **, std::allocator<CRDT::Document_DocObject *>> { struct Document_DocObject **__value_; } __end_cap_; } currentDocObjectEncodingStack;
}

@property (retain, nonatomic) NSMutableOrderedSet *uuidSet;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) void *currentDocument;

+ (void)initialize;
+ (id)encodedDataWithDocument:(id)a0;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (int)indexForKey:(id)a0;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)encodeDocument:(id)a0;
- (void *)currentCustomObjectForEncoding;
- (void *)currentDocumentObjectForEncoding;
- (void)encodeObject:(id)a0 forObjectID:(void *)a1;
- (void)encodeString:(id)a0 forKey:(id)a1;
- (void)encodeUInt32:(unsigned int)a0 forKey:(id)a1;
- (void)encodeUUID:(id)a0 forKey:(id)a1;
- (unsigned long long)encodeUUIDIndexFromUUID:(id)a0;
- (void *)mutableObjectIDForKey:(id)a0;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)a0;
- (void)encodeData:(id)a0 forKey:(id)a1;

@end
