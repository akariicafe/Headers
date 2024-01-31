@interface _EAREuclid : NSObject {
    struct unique_ptr<quasar::TextEmbedder, std::default_delete<quasar::TextEmbedder>> { struct __compressed_pair<quasar::TextEmbedder *, std::default_delete<quasar::TextEmbedder>> { struct TextEmbedder *__value_; } __ptr_; } _embedder;
    struct unique_ptr<quasar::NearestNeighborSearch, std::default_delete<quasar::NearestNeighborSearch>> { struct __compressed_pair<quasar::NearestNeighborSearch *, std::default_delete<quasar::NearestNeighborSearch>> { struct NearestNeighborSearch *__value_; } __ptr_; } _nearestNeighbors;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findClosestStrings:(id)a0;
- (id)findClosestStrings:(id)a0 numberOfNeighbors:(long long)a1;
- (id)findClosestStringsHelper:(id)a0 vector:(struct optional<kaldi::Matrix<float>> { union { char x0; struct Matrix<float> { float *x0; int x1; int x2; int x3; int x4; void *x5; BOOL x6; } x1; } x0; BOOL x1; })a1 numberOfNeighbors:(long long)a2;
- (id)initWithConfiguration:(id)a0 gModelConfigFile:(id)a1 embeddingDims:(int)a2 str2numFile:(id)a3 searchMatrixFilename:(id)a4 tableFilename:(id)a5;

@end
