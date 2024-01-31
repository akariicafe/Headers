@interface _EARLmEvaluator : NSObject {
    struct shared_ptr<quasar::LmEvaluator> { struct LmEvaluator *__ptr_; struct __shared_weak_count *__cntrl_; } _evaluator;
}

@property (nonatomic) BOOL roundingEnabled;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 recognizerConfiguration:(id)a1;
- (id)initWithConfiguration:(id)a0 root:(id)a1 recognizerConfiguration:(id)a2;
- (BOOL)runEvaluationWithData:(id)a0 handle:(id)a1 result:(id *)a2;
- (BOOL)runEvaluationWithData:(id)a0 handle:(id)a1 result:(id *)a2 bestWeight:(float *)a3;
- (BOOL)runEvaluationWithData:(id)a0 handle:(id)a1 shouldStop:(id /* block */)a2 result:(id *)a3 bestWeight:(float *)a4;

@end
