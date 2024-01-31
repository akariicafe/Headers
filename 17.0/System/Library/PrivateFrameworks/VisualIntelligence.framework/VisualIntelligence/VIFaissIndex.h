@interface VIFaissIndex : NSObject {
    struct unique_ptr<faiss::Index, std::default_delete<faiss::Index>> { struct __compressed_pair<faiss::Index *, std::default_delete<faiss::Index>> { struct Index *__value_; } __ptr_; } _index;
}

@property (class, readonly, nonatomic) BOOL hasFaissSupport;

@property (readonly, nonatomic) long long numberOfIndexedEmbeddings;
@property (readonly, nonatomic) long long embeddingLength;

- (id).cxx_construct;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (long long)identifierForIndex:(long long)a0;
- (void)getFaissError:(id *)a0 forCode:(long long)a1 userInfo:(id)a2;
- (id)computeResidualForEmbedding:(id)a0 identifier:(long long)a1 error:(id *)a2;
- (void)getFaissError:(id *)a0 forCode:(long long)a1;
- (void)getFaissError:(id *)a0 forFaissException:(const void *)a1;
- (id)reconstructEmbeddingForIdentifier:(long long)a0;
- (id)searchWithQuery:(id)a0 numberOfNearestNeighbors:(long long)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
