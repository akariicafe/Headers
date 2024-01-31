@class SPSearchQueryContext, NSArray, NSString, NSMutableArray, SPSearchQuery, NSObject, SPDaemonQueryToken;
@protocol OS_dispatch_queue, SPQueryTaskDelegate;

@interface SPQueryTask : NSObject {
    _Atomic int _updatesDisabled;
    _Atomic struct WaitingResults_s *_deferredUpdate;
}

@property (nonatomic) BOOL live;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *sessionEntityString;
@property (nonatomic) unsigned long long state;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSArray *unsafeSections;
@property (readonly, nonatomic) NSArray *unsafeCombinedSuggestions;
@property (readonly, nonatomic) NSArray *unsafeParsecSuggestions;
@property (readonly, nonatomic) NSString *unsafeSessionEntityString;
@property (retain) NSObject<OS_dispatch_queue> *queryProcessor;
@property (retain, nonatomic) SPDaemonQueryToken *token;
@property (nonatomic) unsigned long long unsafeState;
@property BOOL forceStableResults;
@property (nonatomic) unsigned long long maxTopHitAppResults;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) unsigned long long queryKind;
@property (weak, nonatomic) NSObject<SPQueryTaskDelegate> *delegate;
@property (readonly) NSString *searchString;
@property long long maxUISuggestions;
@property (retain, nonatomic) SPSearchQueryContext *previousQueryContext;
@property (retain) NSMutableArray *mutableSections;
@property (retain, nonatomic) SPSearchQuery *query;
@property (retain, nonatomic) NSString *rankingDebugLog;

+ (void)initialize;

- (void)clear;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)postSearchAgentUpdatedResultsToDelegate:(id)a0;
- (void)pushAndPostUpdates;
- (unsigned long long)queryIdForFeedback;
- (BOOL)readyToUpdate;
- (id)retainAndMergeSections:(id)a0 forState:(unsigned long long)a1;
- (void)updateResultsThroughDelegate:(BOOL)a0 state:(unsigned long long)a1 sections:(id)a2;
- (void)updateResultsThroughDelegate:(BOOL)a0 state:(unsigned long long)a1 unchanged:(BOOL)a2 sections:(id)a3;

@end
