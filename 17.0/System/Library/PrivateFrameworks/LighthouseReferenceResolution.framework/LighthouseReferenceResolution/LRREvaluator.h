@class FeatureStoreNluRequestReader, NSString, FeatureStoreSpanMatchReader, LRRFeatureStoreFiltering, LRRNluResponseComparator, NSDictionary, FeatureStoreNluResponseReader, LRRMDComparator, NSDateFormatter, LRRMRComparator;
@protocol LRREvaluatorProtocol;

@interface LRREvaluator : NSObject {
    LRRNluResponseComparator *comparator;
    LRRMDComparator *mdComparator;
    LRRMRComparator *mrComparator;
    NSDateFormatter *formatter;
    FeatureStoreNluRequestReader *requestReader;
    FeatureStoreNluResponseReader *responseReader;
    FeatureStoreSpanMatchReader *spanMatchReader;
    NSDictionary *requestProtos;
    NSDictionary *originalResponses;
    NSDictionary *allMatchingSpans;
    NSDictionary *origMDRequests;
    NSDictionary *origMDResponses;
    NSDictionary *origMRRequests;
    NSDictionary *origMRResponses;
    NSDictionary *repetitionCountsByUtteranceAndWeek;
    NSDictionary *userIsHabitualUserByWeek;
}

@property (readonly, nonatomic) NSString *siriPreferenceLanguageCode;
@property (nonatomic) BOOL siriPreferenceSiriVocabularyEnabled;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (nonatomic) BOOL isAppleConnectInstalled;
@property (readonly, nonatomic) id<LRREvaluatorProtocol> evaluatorProtocol;
@property (retain) LRRFeatureStoreFiltering *featureStoreFilteringManager;
@property (nonatomic) BOOL shouldStop;

- (void).cxx_destruct;
- (BOOL)evaluate;
- (id)compareReplayResuts:(id)a0 replayedRequestId:(id)a1;
- (void)emitSampleEvaluationResult:(id)a0 taskStarted:(id)a1;
- (void)emitTaskEvaluationResult:(id)a0 dateStart:(id)a1 taskStartTs:(double)a2;
- (BOOL)evaluateWithCandidateModel:(id)a0 siriAssetDirPath:(id)a1;
- (id)getCalendarWeekNumberFromDate:(id)a0;
- (id)getRepetitionCountByUtteranceAndWeekFromRequestProtos:(id)a0;
- (id)getUserIsHabitualUserFromRequestProtos:(id)a0;
- (id)getWeekdayNumberFromDate:(id)a0;
- (id)initWithProtocol:(id)a0 featureStoreFiltering:(id)a1;
- (BOOL)isValidRequestId:(id)a0;
- (id)replayOneSample:(id)a0 taskStarted:(id)a1 siriAssetDirPath:(id)a2 emitMessage:(BOOL)a3;
- (void)snapshotInteractionsFromFeatureStore;
- (void)snapshotInteractionsFromFeatureStoreForIds:(id)a0;

@end
