@class MLMultiArrayConstraint, MLMultiArray, MLModelDescription;

@interface SNDSPGraphCustomModel : NSObject {
    MLModelDescription *_modelDescription;
    MLMultiArrayConstraint *_inputConstraint;
    MLMultiArrayConstraint *_outputConstraint;
    struct unique_ptr<DSPGraph::Graph, std::default_delete<DSPGraph::Graph>> { struct __compressed_pair<DSPGraph::Graph *, std::default_delete<DSPGraph::Graph>> { struct Graph *__value_; } __ptr_; } _graph;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _scratchFloatSpace;
    MLMultiArray *_modelOutput;
    id /* block */ _preProcessCallback;
}

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
