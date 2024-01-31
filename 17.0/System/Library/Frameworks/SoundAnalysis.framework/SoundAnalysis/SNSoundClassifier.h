@class NSString, NSSet;
@protocol SNMLModel;

@interface SNSoundClassifier : NSObject <SNAnalyzing> {
    id<SNMLModel> _model;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    unsigned int _modelBlockSize;
    int _resultsToDiscardCount;
    NSSet *_classLabelsDenylist;
    double _overlapFactor;
    NSString *_classifierIdentifier;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _windowDuration;
}

@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (void)primeGraph;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;

@end
