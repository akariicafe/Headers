@class NSString, FrequentlyVisitedSitesController, NSTimer, UniversalSearchSession, NSNumber, WBSCompletionQuery;

@interface UniversalSearchCompletionProvider : CompletionProvider <WBSParsecSearchSessionDelegate> {
    NSTimer *_timeoutTimer;
    NSString *_queryString;
    NSString *_currentQueryString;
    WBSCompletionQuery *_currentQuery;
    NSString *_keyboardInputMode;
    BOOL _enabledByBag;
}

@property (retain, nonatomic) NSNumber *searchRenderTimeout;
@property (readonly, nonatomic) FrequentlyVisitedSitesController *frequentlyVisitedSitesController;
@property (readonly, nonatomic) NSNumber *otherRenderTimeout;
@property (readonly, nonatomic) NSNumber *minRenderTimeout;
@property (retain, nonatomic) UniversalSearchSession *parsecSearchSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_parsecBagDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)currentKeyboardIdentifierWithLayoutsForSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)session:(id)a0 didReceiveResults:(id)a1 forQuery:(id)a2;
- (void)_updateInputMode:(id)a0;
- (void)_updateStateFromBag:(id)a0;
- (id)completionsForQuery:(id)a0;
- (id)currentInputTypeForSession:(id)a0;
- (id)initWithFrequentlyVisitedSitesController:(id)a0;
- (unsigned long long)maximumCachedCompletionCount;
- (void)setQueryToComplete:(id)a0;
- (BOOL)shouldHideParsecResult:(id)a0 basedOnHideRankGivenTopHit:(id)a1 indexOfTopHitInFrequentlyVisitedSites:(unsigned long long *)a2;

@end
