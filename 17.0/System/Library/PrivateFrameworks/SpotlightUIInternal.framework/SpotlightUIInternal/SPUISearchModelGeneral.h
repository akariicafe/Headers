@class NSObject, NSString, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *rankingDebugLog;

- (void)clear;
- (id)init;
- (void)setInfinitePatience:(BOOL)a0;
- (BOOL)infinitePatience;
- (BOOL)queryInProgress;
- (void)updatesEnabled;
- (long long)maxUISuggestions;
- (void)setMaxUISuggestions:(long long)a0;
- (void)activate;
- (BOOL)shouldEnableOCR;
- (void)updatesDisabled;
- (void)updateWithQueryContext:(id)a0;
- (void)setForceStableResults:(BOOL)a0;
- (void).cxx_destruct;
- (void)_setInfinitePatience:(BOOL)a0;
- (BOOL)forceStableResults;
- (void)deactivate;

@end
