@interface TIInlineCompletionGenerator : NSObject

@property (nonatomic) struct shared_ptr<TIInlineCompletionGeneratorImpl> { struct TIInlineCompletionGeneratorImpl *__ptr_; struct __shared_weak_count *__cntrl_; } completionGenerator;

- (id)init:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)registerLearningForCompletion:(id)a0 fullCompletion:(id)a1 context:(id)a2 prefix:(id)a3 mode:(id)a4;
- (id)completionForContext:(id)a0 withPrefix:(id)a1;
- (id)initWithLocale:(id)a0 minWordsPerPrediction:(unsigned long long)a1 maxWordsPerPrediction:(unsigned long long)a2;

@end
