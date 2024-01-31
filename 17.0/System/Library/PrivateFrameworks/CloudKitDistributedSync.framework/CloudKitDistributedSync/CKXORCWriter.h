@class NSError, CKDSWritableStorage, CKXORCWriterOptions;
@protocol CKXORCHelpers;

@interface CKXORCWriter : CKXWriterBase <CKXWriterProtocol> {
    struct unique_ptr<orc::Writer, std::default_delete<orc::Writer>> { struct __compressed_pair<orc::Writer *, std::default_delete<orc::Writer>> { struct Writer *__value_; } __ptr_; } _writer;
    struct unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>> { struct __compressed_pair<orc::OutputStream *, std::default_delete<orc::OutputStream>> { struct OutputStream *__value_; } __ptr_; } _outputStream;
    struct unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>> { struct __compressed_pair<orc::ColumnVectorBatch *, std::default_delete<orc::ColumnVectorBatch>> { struct ColumnVectorBatch *__value_; } __ptr_; } _currentBatch;
    struct set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> { struct __tree<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<CKXStructInstance, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<CKXStructInstance>> { unsigned long long __value_; } __pair3_; } __tree_; } _uncommittedStructs;
}

@property (retain, nonatomic) CKDSWritableStorage *storage;
@property (readonly, nonatomic) id<CKXORCHelpers> helpers;
@property (readonly, nonatomic) CKXORCWriterOptions *options;
@property (nonatomic) unsigned long long rootStructToken;
@property (nonatomic) unsigned long long startingRowForCurrentBatch;
@property (nonatomic) unsigned long long commitCount;
@property (retain, nonatomic) NSError *writeError;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;
- (id)initWithSchema:(id)a0 helpers:(id)a1 options:(id)a2;
- (BOOL)flushWithError:(id *)a0;
- (void)_appendData:(void *)a0 withValueSize:(unsigned long long)a1 length:(unsigned long long)a2 toRow:(unsigned long long)a3 toList:(unsigned long long)a4;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })appendRowForStruct:(unsigned long long)a0;
- (void)assignStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 toReference:(unsigned long long)a1 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginAppendedListStructInList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginReferencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginReferencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginRootStructWithType:(unsigned long long)a0 error:(id *)a1;
- (BOOL)commitBatchIfNeededWithError:(id *)a0;
- (BOOL)commitBatchWithError:(id *)a0;
- (void)commitStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (BOOL)createWriterWithError:(id *)a0;
- (void)enumerateAllColumnsWithBlock:(id /* block */)a0;
- (void)expandColumn:(void *)a0 includingBatchOffset:(unsigned long long)a1;
- (void)expandColumn:(void *)a0 includingRow:(unsigned long long)a1;
- (BOOL)growCurrentBatchToIncludeBatchOffset:(unsigned long long)a0;
- (BOOL)growCurrentBatchToIncludeRow:(unsigned long long)a0;
- (void *)listColumnForReference:(unsigned long long)a0;
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)a0;
- (void)resetColumnNulls:(void *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void *)rootColumn;
- (void)setData:(void *)a0 withEncoding:(const char *)a1 forField:(unsigned long long)a2 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)setData:(void *)a0 withLength:(unsigned long long)a1 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a2;
- (BOOL)setWritableStorage:(id)a0 error:(id *)a1;
- (void *)structColumnForStruct:(unsigned long long)a0;
- (void *)structReferenceColumnForReference:(unsigned long long)a0;
- (void)updateNumberOfElementsForCurrentBatch;
- (void *)valueColumnForField:(unsigned long long)a0;
- (unsigned long long)valueSizeForField:(unsigned long long)a0;

@end
