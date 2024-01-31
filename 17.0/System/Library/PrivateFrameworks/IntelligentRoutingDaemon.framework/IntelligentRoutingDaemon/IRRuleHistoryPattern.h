@class NSSet;

@interface IRRuleHistoryPattern : IRRule

@property (retain, nonatomic) NSSet *eventsToWatch;
@property (retain, nonatomic) NSSet *filters;
@property (nonatomic) double timeInterval;
@property (nonatomic) unsigned long long maxNumberOfEventsInHistory;
@property (nonatomic) unsigned long long minNumberOfEventsInHistory;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL calculateScoreWithoutPortion;

+ (BOOL)_filterHistoryBySameApp:(id)a0 withSystemState:(id)a1;
+ (BOOL)filterHistoryBySimilarApp:(id)a0 withSystemState:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_filterHistoryByEventsToWatch:(id)a0;
- (BOOL)_filterHistoryByMilo:(id)a0 withMiloPrediction:(id)a1;
- (BOOL)_filterHistoryBySameDay:(id)a0 comparedToDate:(id)a1 withSystemState:(id)a2;
- (BOOL)_filterHistoryBySameLoi:(id)a0 withSystemState:(id)a1;
- (BOOL)_filterHistoryByTimeInterval:(id)a0 comparedToDate:(id)a1;
- (id)_filterHistoryEvents:(id)a0 withSystemState:(id)a1 date:(id)a2 miloPrediction:(id)a3 candiatesContainer:(id)a4;
- (BOOL)_filterHistorywithSameCandidates:(id)a0 withSameCandidates:(id)a1;
- (id)executeRuleWithCandiatesContainer:(id)a0 systemStatus:(id)a1 historyContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 date:(id)a5;
- (id)initWithEventsToWatch:(id)a0 filters:(id)a1 timeInterval:(double)a2 maxNumberOfEventsInHistory:(unsigned long long)a3 minNumberOfEventsInHistory:(unsigned long long)a4 threshold:(double)a5;

@end
