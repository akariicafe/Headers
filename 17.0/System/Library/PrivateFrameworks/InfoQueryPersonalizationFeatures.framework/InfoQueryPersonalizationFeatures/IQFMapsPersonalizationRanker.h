@class NSSet, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IQFMapsPersonalizationRanker : NSObject {
    NSSet *_cachedMUIDs;
    NSArray *_cachedRankedResults;
    double _visitCountThreshold;
    double _lastVisitDaysThreshold;
    double _visitCountGivenLocationThreshold;
    double _entityRelevanceThreshold;
    BOOL _enableEntityRelevance;
    NSObject<OS_dispatch_queue> *_caLoggingQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithVisitCountThreshold:(double)a0 lastVisitDaysThreshold:(double)a1 visitCountGivenLocationThreshold:(double)a2 entityRelevanceThreshold:(double)a3 enableEntityRelevance:(BOOL)a4;
- (BOOL)isResultCandidateForPromotion:(id)a0;
- (void)rankedEventsForLocations:(id)a0 completionHandler:(id /* block */)a1;
- (id)_sortedResults:(id)a0;
- (long long)_compareResult:(id)a0 toOtherResult:(id)a1;
- (double)_calendarEventScoreForResult:(id)a0;
- (double)_routineFrecencyScoreForEntityRelevanceResult:(id)a0;
- (double)_routineFrecencyScoreForLifeEvent:(id)a0;
- (double)_scoreForResult:(id)a0;
- (void)_updateCachedMUIDs:(id)a0 rankedResults:(id)a1;
- (id)initWithVisitCountThreshold:(double)a0 lastVisitDaysThreshold:(double)a1 visitCountGivenLocationThreshold:(double)a2 entityRelevanceThreshold:(double)a3;
- (id)rankedEventsForLocations:(id)a0;

@end
