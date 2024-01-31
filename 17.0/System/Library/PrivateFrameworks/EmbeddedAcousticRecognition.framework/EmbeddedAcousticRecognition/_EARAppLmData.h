@class NSArray;

@interface _EARAppLmData : _EARLmData {
    BOOL roundingEnabled;
    long long inputType;
}

@property (readonly, nonatomic) struct shared_ptr<quasar::AppLmData> { struct AppLmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (readonly, nonatomic) NSArray *orderedOovs;

+ (void)initialize;

- (id).cxx_construct;
- (id)metrics;
- (void).cxx_destruct;
- (long long)inputType;
- (void)setInputFormat:(long long)a0;
- (BOOL)roundingEnabled;
- (void)addLineWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addNgramCountWithType:(unsigned long long)a0 content:(id)a1;
- (id)addOovTokensFromSentence:(id)a0;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2 hasWeights:(BOOL)a3;
- (long long)canAddAsrProns:(id)a0 forWord:(id)a1;
- (long long)canAddProns:(id)a0 forWord:(id)a1 pronIsXsampa:(BOOL)a2;
- (long long)canAddXsampaProns:(id)a0 forWord:(id)a1;
- (void)generateLmeData:(id)a0;
- (id)initWithAppLmData:(struct shared_ptr<quasar::AppLmData> { struct AppLmData *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfigPath:(id)a2;
- (id)initWithConfiguration:(id)a0 recognizerConfigPath:(id)a1;
- (long long)lmeThreshold;
- (BOOL)setAsrProns:(id)a0 forWord:(id)a1;
- (BOOL)setProns:(id)a0 forWord:(id)a1 pronIsXsampa:(BOOL)a2;
- (void)setRoundingEnabled:(BOOL)a0;
- (BOOL)setXsampaProns:(id)a0 forWord:(id)a1;
- (id)supportedSlots;

@end
