@interface SNLPEmbedder : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct EmbedderOrchestrator *__value_; } __ptr_; } _cppOrchestrator;
}

+ (id)convertCppSubwordTokenChainToObjC:(struct SubwordTokenChain { void /* function */ **x0; struct unique_ptr<std::string, std::default_delete<std::string>> { struct __compressed_pair<std::string *, std::default_delete<std::string>> { void *x0; } x0; } x1; struct PtrVector<sirinluinternal::SubwordToken> { struct vector<std::unique_ptr<sirinluinternal::SubwordToken>, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<sirinluinternal::SubwordToken> *, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> { void *x0; } x2; } x0; } x2; })a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)warmup;
- (id)getEmbeddings:(id)a0;
- (id)getEmbeddingsBySentence:(id)a0;
- (id)getEmbeddingsBySentenceWithError:(id)a0 error:(id *)a1;
- (id)getEmbeddingsWithError:(id)a0 error:(id *)a1;
- (id)initFromAssetDirectoryURL:(id)a0;
- (id)initFromAssetDirectoryURLWithError:(id)a0 error:(id *)a1;
- (id)initFromSourceVocabPath:(id)a0 bertModelPath:(id)a1 bertConfigPath:(id)a2 reformulatorPath:(id)a3;
- (id)initFromSourceVocabPathWithError:(id)a0 bertModelPath:(id)a1 bertConfigPath:(id)a2 reformulatorPath:(id)a3 error:(id *)a4;

@end
