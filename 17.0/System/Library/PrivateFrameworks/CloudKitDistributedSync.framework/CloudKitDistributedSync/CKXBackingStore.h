@class CKDSStorage, CKXVersionedReaderWriterStore, CKXProxyCache, CKXProxyBase, CKDSReadableStorage, NSObject, CKDSWritableStorage;
@protocol CKXBinding, CKXReadStructProxy, CKXWriteStructProxy;

@interface CKXBackingStore : NSObject <CKXReaderProtocol, CKXWriterProtocol, CKXReaderWriterProtocol>

@property (retain, nonatomic) CKDSStorage *storage;
@property (retain, nonatomic) CKXVersionedReaderWriterStore *readerWriterStore;
@property (retain, nonatomic) CKXProxyCache *proxyCache;
@property (nonatomic) unsigned long long cacheScope;
@property (retain, nonatomic) CKXProxyBase<CKXReadStructProxy> *topLevelReadProxy;
@property (readonly, nonatomic) CKXProxyBase<CKXWriteStructProxy> *topLevelWriteProxy;
@property (nonatomic) struct { unsigned char formatVersion; struct { unsigned char writerCode; unsigned char writerVersion; } writerIdentity; } header;
@property (readonly, nonatomic) NSObject<CKXBinding> *binding;
@property (readonly, nonatomic) CKDSReadableStorage *readableStorage;
@property (readonly, nonatomic) CKDSWritableStorage *writableStorage;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) BOOL isWriting;

+ (id)createHeaderDataForFormatVersion:(unsigned char)a0;
+ (BOOL)header:(struct { unsigned char x0; struct { unsigned char x0; unsigned char x1; } x1; } *)a0 forStorage:(id)a1 error:(id *)a2;
+ (struct { unsigned char x0; struct { unsigned char x0; unsigned char x1; } x1; })headerForData:(id)a0;
+ (unsigned long long)headerSizeForFormatVersion:(unsigned char)a0;
+ (BOOL)prefixStorage:(id)a0 withHeaderForVersion:(unsigned char)a1 error:(id *)a2;

- (id)schema;
- (id)reader;
- (void).cxx_destruct;
- (id)writer;
- (void)readUsingBlock:(id /* block */)a0;
- (BOOL)finishWritingWithError:(id *)a0;
- (void)writeUsingBlock:(id /* block */)a0;
- (id)readerForProxy:(id)a0;
- (BOOL)flushWithError:(id *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructAtIndex:(long long)a0 inList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (id)writerForProxy:(id)a0;
- (id)_proxyWithListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 mutable:(BOOL)a1 cacheScope:(long long)a2;
- (id)_proxyWithStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 mutable:(BOOL)a1 cacheScope:(long long)a2;
- (BOOL)_setupBackingStoreForReadingWithError:(id *)a0;
- (BOOL)_setupBackingStoreForWritingWithError:(id *)a0;
- (BOOL)_validateVersion:(unsigned char)a0 isReader:(BOOL)a1 error:(id *)a2;
- (id)appendedStructProxyForListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)assignStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 toReference:(unsigned long long)a1 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginAppendedListStructInList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginReferencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginReferencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginRootStructWithType:(unsigned long long)a0 error:(id *)a1;
- (void)commitStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)copyData:(void *)a0 forField:(unsigned long long)a1 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)copyData:(void *)a0 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (id)initWithStorage:(id)a0 binding:(id)a1 error:(id *)a2;
- (id)initWithStorage:(id)a0 binding:(id)a1 optionsByReaderWriterClass:(id)a2 formatVersion:(unsigned char)a3 error:(id *)a4;
- (id)initWriterWithStorage:(id)a0 binding:(id)a1 formatVersion:(unsigned char)a2;
- (long long)lengthForList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)proxyScope:(id /* block */)a0;
- (BOOL)referenceIsNull:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })rootStructWithType:(unsigned long long)a0;
- (void)setData:(void *)a0 withEncoding:(const char *)a1 forField:(unsigned long long)a2 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)setData:(void *)a0 withLength:(unsigned long long)a1 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a2;
- (BOOL)setReadableStorage:(id)a0 error:(id *)a1;
- (BOOL)setWritableStorage:(id)a0 error:(id *)a1;
- (id)structListProxyForListReference:(unsigned long long)a0 inStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 mutable:(BOOL)a2;
- (id)structProxyForListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 atIndex:(long long)a1;
- (id)structProxyForStructReference:(unsigned long long)a0 inStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 mutable:(BOOL)a2;
- (unsigned long long)valueSizeForField:(unsigned long long)a0;
- (struct { unsigned char x0; unsigned char x1; })writerIdentity;

@end
