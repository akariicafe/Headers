@class IQFMapsPersonalizationRanker;

@interface PRSMapsParsecRanker : NSObject {
    IQFMapsPersonalizationRanker *_iqfRanker;
    BOOL _rankerEnabled;
    BOOL _entityRelevanceEnabled;
    double _visitCountThreshold;
    double _visitCountGivenLocationThreshold;
    double _lastVisitDaysThreshold;
    double _entityRelevanceThreshold;
}

+ (id)sharedMapsParsecRanker;

- (id)init;
- (void).cxx_destruct;
- (void)_logTriggerIfNecessary:(id)a0 queryId:(long long)a1;
- (id)_parseMUIDFromResultIdentifier:(id)a0;
- (void)_emitRerankNotNeededSignpost;
- (void)_emitRerankSuccessfulSignpost;
- (id)_rerankMapsResults:(id)a0 withRankedEvents:(id)a1 withMuidToResultIndex:(id)a2;
- (id)_tagSearchResults:(id)a0 withTopMatchFromEvents:(id)a1 muidToResultIndex:(id)a2;
- (id)initWithRankerEnabled:(BOOL)a0 visitCountThreshold:(double)a1 visitCountGivenLocationThreshold:(double)a2 lastVisitDaysThreshold:(double)a3 entityRelevanceThreshold:(double)a4 enableEntityRelevance:(BOOL)a5;
- (BOOL)isResultCandidateForPromotion:(id)a0;
- (id)rerankMapsResultsWithLocalSignals:(id)a0 forQueryId:(long long)a1;

@end
