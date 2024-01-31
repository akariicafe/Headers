@class SPQueryTask, NSArray, NSString, SFResultSection, SPQueryResponse, NSObject;
@protocol SPSearchAgentDelegate;

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {
    long long _updatesDisabled;
    NSString *_lastQueryString;
}

@property (retain) SPQueryResponse *lastResponse;
@property BOOL springBoardIsActive;
@property BOOL infinitePatience;
@property BOOL queryJustHasTopHits;
@property BOOL queryPartiallyComplete;
@property BOOL queryComplete;
@property BOOL forceStableResults;
@property (readonly) BOOL wantsCompletions;
@property (readonly) NSArray *sections;
@property (readonly) SFResultSection *searchThroughSection;
@property (retain) SPQueryTask *queryTask;
@property (weak) NSObject<SPSearchAgentDelegate> *delegate;
@property long long maxUISuggestions;

+ (id)sharedInstance;
+ (void)preheat;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;
+ (id)sharedFullZWKInstance;
+ (id)sharedGeneralInstance;

- (void)clear;
- (BOOL)queryInProgress;
- (void)invalidate;
- (void)updatesEnabled;
- (void)activate;
- (void)updatesDisabled;
- (void)updateWithQueryContext:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveResponse:(id)a0;
- (void)deactivate;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)resultsDidBecomeInvalid:(id)a0;
- (BOOL)_suggestionsReadyForDisplay;
- (void)invalidateCurrentQuery;
- (void)invalidateQuery:(id)a0;
- (void)updateWithResponse:(id)a0;

@end
