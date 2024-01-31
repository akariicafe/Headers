@class MLGKDecisionTree, GKRandomSource, GKDecisionNode;

@interface GKDecisionTree : NSObject <NSSecureCoding> {
    struct GKCDecisionTree { struct GKCDecisionNode *x0; struct GKCDecisionNode *x1; } *_decisionTree;
    BOOL _isInduced;
    MLGKDecisionTree *mlkitDecisionTree;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GKDecisionNode *rootNode;
@property (copy, nonatomic) GKRandomSource *randomSource;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)exportToURL:(id)a0 error:(id)a1;
- (id)findAccuracyWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2;
- (id)findActionForAnswers:(id)a0;
- (id)getFlattenedTree;
- (id)initWithAttribute:(id)a0;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2 maxDepth:(unsigned long long)a3 minSamplesSplit:(unsigned long long)a4;

@end
