@class __end_cap_, CKXORCReaderOptions, CKDSReadableStorage, __end_;
@protocol CKXORCHelpers;

@interface CKXORCReader : CKXReaderBase <CKXReaderProtocol> {
    struct unique_ptr<orc::Reader, std::default_delete<orc::Reader>> { struct __compressed_pair<orc::Reader *, std::default_delete<orc::Reader>> { struct Reader *__value_; } __ptr_; } _reader;
    struct vector<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>, std::allocator<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>> *, std::allocator<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>> { void *__value_; } __end_cap_; } _structToReaderBatchPair;
    struct vector<NSIndexSet *, std::allocator<NSIndexSet *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSIndexSet *__strong *, std::allocator<NSIndexSet *>> { id *__value_; } x1; } _rowsForTopLevelContainerStructs;
}

@property (retain, nonatomic) CKDSReadableStorage *storage;
@property (readonly, nonatomic) id<CKXORCHelpers> helpers;
@property (readonly, nonatomic) CKXORCReaderOptions *options;
@property (nonatomic) unsigned long long loadCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;
- (id)initWithSchema:(id)a0 helpers:(id)a1 options:(id)a2;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructAtIndex:(long long)a0 inList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (BOOL)_setInputWithError:(id *)a0;
- (void)copyData:(void *)a0 forField:(unsigned long long)a1 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)copyData:(void *)a0 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (BOOL)createReaderIfNecessaryWithError:(id *)a0;
- (void)createRowReaderForStruct:(unsigned long long)a0;
- (long long)lengthForList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void *)listColumnForReference:(unsigned long long)a0;
- (BOOL)loadBatchWithRow:(unsigned long long)a0 forStruct:(unsigned long long)a1;
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)a0 forStruct:(unsigned long long)a1;
- (BOOL)referenceIsNull:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void *)rootColumnForStruct:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })rootStructWithType:(unsigned long long)a0;
- (id)rowsForStructColumn:(unsigned long long)a0;
- (BOOL)setReadableStorage:(id)a0 error:(id *)a1;
- (void *)structColumnForStruct:(unsigned long long)a0;
- (void *)structReferenceColumnForReference:(unsigned long long)a0;
- (void *)valueColumnForField:(unsigned long long)a0;
- (unsigned long long)valueSizeForField:(unsigned long long)a0;

@end
