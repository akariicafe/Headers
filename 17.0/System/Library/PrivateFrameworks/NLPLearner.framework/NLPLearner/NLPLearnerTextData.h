@class NSMutableArray, NSLocale;

@interface NLPLearnerTextData : NSObject

@property (retain, nonatomic) NSMutableArray *sentences;
@property (nonatomic) unsigned long long iterator;
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL processingNewRecord;
@property (readonly, nonatomic) unsigned long long numSamples;
@property (nonatomic) unsigned long long maxSequenceLength;

+ (void)initialize;
+ (id)dataForPFL:(long long)a0 andLocale:(id)a1;
+ (id)dataForTask:(long long)a0 andLocale:(id)a1;
+ (unsigned long long)defaultMaxSequenceLength;

- (void)addResource:(id)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)addExamples:(id)a0;
- (void)rewind;
- (id)getSamples;
- (BOOL)loadFromCoreDuet:(id)a0 limitSamplesTo:(unsigned long long)a1;
- (BOOL)loadFromCoreDuet:(id)a0 limitSamplesTo:(unsigned long long)a1 withLocale:(id)a2 andLMStreamTokenizationBlock:(id /* block */)a3;

@end
