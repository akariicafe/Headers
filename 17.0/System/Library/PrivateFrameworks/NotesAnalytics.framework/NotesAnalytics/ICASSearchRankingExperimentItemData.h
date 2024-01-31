@class NSString, ICASRankingStrategyType, NSNumber;

@interface ICASSearchRankingExperimentItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASRankingStrategyType *rankingStrategyType;
@property (readonly, nonatomic) NSNumber *rank;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithRankingStrategyType:(id)a0 rank:(id)a1;

@end
