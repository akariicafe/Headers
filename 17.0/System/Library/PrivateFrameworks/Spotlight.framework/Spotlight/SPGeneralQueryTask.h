@class NSString, NSArray, SPClientSession, NSObject;
@protocol OS_dispatch_source;

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate> {
    NSObject<OS_dispatch_source> *_staleResultsTimer;
    BOOL _staleResultsFired;
}

@property (retain, nonatomic) NSString *mutableSessionEntityString;
@property (retain, nonatomic) NSArray *showMoreInAppInfo;
@property BOOL didReceiveCompleteCallback;
@property BOOL newQuery;
@property (retain) NSArray *supportedAppScopes;
@property (weak) SPClientSession *session;
@property BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactEntityFromQueryContext:(id)a0;

- (id)searchString;
- (void)clear;
- (void)start;
- (id)displayedText;
- (id)unsafeSections;
- (void).cxx_destruct;
- (void)cancel;
- (id)unsafeSessionEntityString;
- (void)searchDaemonQuery:(id)a0 encounteredError:(id)a1;
- (void)searchDaemonQuery:(id)a0 gotResultSet:(id)a1 replace:(BOOL)a2 partiallyComplete:(BOOL)a3 priorityFastPath:(BOOL)a4 update:(BOOL)a5 complete:(BOOL)a6 delayedTopHit:(BOOL)a7 unchanged:(BOOL)a8 forceStable:(BOOL)a9 blendingDuration:(double)a10 geoEntityString:(id)a11 supportedAppScopes:(id)a12 showMoreInAppInfo:(id)a13;
- (void)searchDaemonRankingLog:(id)a0;
- (void)mergeRelatedContentFromSections:(id)a0 bundlesToMerge:(id)a1 mergedSectionId:(id)a2;
- (void)addSections:(id)a0 delayedTopHit:(BOOL)a1;
- (void)handleOptionsForNewSections:(id)a0;
- (id)initForSession:(id)a0 withQuery:(id)a1;
- (void)mergeSections;
- (void)processAppResults:(id)a0 maxAppResults:(unsigned long long)a1 section:(id)a2 topHitsIndex:(unsigned long long *)a3;
- (BOOL)readyToUpdate;
- (void)relatedContentSectionMerging:(id)a0;
- (id)retainAndMergeSections:(id)a0 forState:(unsigned long long)a1;
- (void)truncateSuggestionsSectionToFit:(id)a0;
- (void)updateResultsWithContactHeader;

@end
