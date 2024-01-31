@class NSNumber, NSString, ICASSelectedResultType, NSArray, ICASGmRankingStrategyType, ICASSelectedResultAccountType;

@interface ICASSearchSelectionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *selectedResultID;
@property (readonly, nonatomic) ICASSelectedResultAccountType *selectedResultAccountType;
@property (readonly, nonatomic) ICASSelectedResultType *selectedResultType;
@property (readonly, nonatomic) ICASGmRankingStrategyType *gmRankingStrategyType;
@property (readonly, nonatomic) NSNumber *gmRank;
@property (readonly, nonatomic) NSArray *searchRankingExperimentSummary;
@property (readonly, nonatomic) NSNumber *gmRankIOS13;
@property (readonly, nonatomic) NSNumber *charLengthOfQueryString;
@property (readonly, nonatomic) NSNumber *isNoteFoundByAttachment;
@property (readonly, nonatomic) NSNumber *isTopHit;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSelectedResultID:(id)a0 selectedResultAccountType:(id)a1 selectedResultType:(id)a2 gmRankingStrategyType:(id)a3 gmRank:(id)a4 searchRankingExperimentSummary:(id)a5 gmRankIOS13:(id)a6 charLengthOfQueryString:(id)a7 isNoteFoundByAttachment:(id)a8 isTopHit:(id)a9;

@end
