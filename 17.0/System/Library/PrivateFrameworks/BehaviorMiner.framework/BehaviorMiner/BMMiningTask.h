@class NSDate, NSString, NSURL, BMAprioriPatternMiner, NSSet, BMEventExtractor, BMMiningTaskConfig, NSMutableDictionary, BMBasketExtractor, BMRuleExtractor;
@protocol BMMiningTaskDelegate, BMPatternMiner;

@interface BMMiningTask : NSObject

@property (copy, nonatomic) NSDate *start;
@property (nonatomic) long long completionStatus;
@property (retain, nonatomic) BMEventExtractor *eventExtractor;
@property (retain, nonatomic) BMBasketExtractor *basketExtractor;
@property (retain, nonatomic) BMAprioriPatternMiner<BMPatternMiner> *patternMiner;
@property (retain, nonatomic) BMRuleExtractor *ruleExtractor;
@property (readonly, copy, nonatomic) NSSet *types;
@property (readonly, copy, nonatomic) NSSet *targetTypes;
@property (readonly, nonatomic) double samplingInterval;
@property (readonly, nonatomic) unsigned long long absoluteSupport;
@property (readonly, nonatomic) double confidence;
@property (retain, nonatomic) BMMiningTaskConfig *bmMiningTaskConfig;
@property (weak, nonatomic) id<BMMiningTaskDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *coreAnalyticsDict;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) unsigned long long rulePersistBatchSize;
@property (nonatomic) unsigned long long maxItemsetSize;
@property (readonly, copy, nonatomic) NSURL *storageURL;
@property (readonly, nonatomic) double miningInterval;

+ (id)supergreenMiningTask;
+ (BOOL)supportsTaskSpecificEvents;

- (id)init;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)finishWithCompletionStatus:(long long)a0;
- (id)initWithDomain:(id)a0 types:(id)a1 targetTypes:(id)a2 samplingInterval:(double)a3 absoluteSupport:(unsigned long long)a4 confidence:(double)a5 rulePersistBatchSize:(unsigned long long)a6 miningInterval:(double)a7;
- (id)initWithStorageURL:(id)a0 types:(id)a1 targetTypes:(id)a2 samplingInterval:(double)a3 absoluteSupport:(unsigned long long)a4 confidence:(double)a5;
- (id)initWithStorageURL:(id)a0 types:(id)a1 targetTypes:(id)a2 samplingInterval:(double)a3 absoluteSupport:(unsigned long long)a4 confidence:(double)a5 rulePersistBatchSize:(unsigned long long)a6;
- (id)initWithStorageURL:(id)a0 types:(id)a1 targetTypes:(id)a2 samplingInterval:(double)a3 absoluteSupport:(unsigned long long)a4 confidence:(double)a5 rulePersistBatchSize:(unsigned long long)a6 miningInterval:(double)a7;
- (void)mine;
- (void)terminateEarly;

@end
