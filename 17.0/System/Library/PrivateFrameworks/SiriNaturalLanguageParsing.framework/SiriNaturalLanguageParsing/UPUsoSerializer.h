@interface UPUsoSerializer : NSObject {
    struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager *__ptr_; struct __shared_weak_count *__cntrl_; } _usoVocabManager;
}

+ (id)_convertBundleIdToEntity:(id)a0;
+ (id)_groupHigherLevelEntities:(id)a0;
+ (id)_intermediateNodeRepresentations:(struct vector<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> { void *x0; void *x1; struct __compressed_pair<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>> *, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> { void *x0; } x2; })a0;
+ (id)_leafNodeFromGraphEdge:(const void *)a0 andGraphNode:(const struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a1;
+ (id)_leafNodeFromLabel:(id)a0 andGraphSemanticValueNode:(const void *)a1;
+ (id)_leafNodeFromLabel:(id)a0 andGraphStringNode:(const void *)a1;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)deserializeFromSerializedGraph:(id)a0;
- (void)_addPathForLabel:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 semanticValue:(id)a3 sharedEntityGraph:(id)a4 toGraphNode:(struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a5 forGraph:(void *)a6;
- (void)_attachSharedEntity:(id)a0 withCustomEntityEdge:(const void *)a1 toGraphNode:(struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a2 forGraph:(void *)a3;
- (void)_insertHigherLevelEntities:(id)a0 intoGraph:(void *)a1 underTaskNode:(struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a2;
- (void)_insertSimpleEntity:(id)a0 intoGraph:(void *)a1 underTaskNode:(struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a2;
- (id)serializeFromIntent:(id)a0 andEntities:(id)a1 forBundleId:(id)a2;

@end
