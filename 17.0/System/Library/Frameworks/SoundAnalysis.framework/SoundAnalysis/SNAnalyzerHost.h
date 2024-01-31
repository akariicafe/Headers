@class NSString;
@protocol SNTimeConverting, SNAnalyzing;

@interface SNAnalyzerHost : NSObject <SNProcessing> {
    id<SNAnalyzing> _analyzer;
    id<SNTimeConverting> _timeConverter;
    id /* block */ _resultsHandler;
    id /* block */ _completionHandler;
    struct unique_ptr<AUProcessingBlock_DSPGraph, std::default_delete<AUProcessingBlock_DSPGraph>> { struct __compressed_pair<AUProcessingBlock_DSPGraph *, std::default_delete<AUProcessingBlock_DSPGraph>> { struct AUProcessingBlock_DSPGraph *__value_; } __ptr_; } _processingBlockServer;
    long long _requestState;
}

@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;

@end
