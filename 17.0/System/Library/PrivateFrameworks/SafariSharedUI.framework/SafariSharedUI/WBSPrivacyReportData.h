@class NSDate, NSString, NSArray, WBSKnownTrackingThirdParty, NSSet, NSMutableArray, NSObject, WBSKnownTrackerFilter, WKWebView;
@protocol OS_dispatch_queue;

@interface WBSPrivacyReportData : NSObject <WBSPrivacyReportDataProvider> {
    NSObject<OS_dispatch_queue> *_dataPrefetchQueue;
    long long _prefetchState;
    NSMutableArray *_prefetchCompletionHandlers;
    WBSKnownTrackerFilter *_knownTrackerFilter;
    NSSet *_firstPartiesFromHistory;
    NSDate *_dataWindowStartDate;
    NSDate *_dataWindowEndDate;
    NSString *_webViewFirstPartyHighLevelDomainFromHost;
    NSArray *_webViewLoadedThirdParties;
}

@property (readonly, copy, nonatomic) NSSet *histories;
@property (readonly, copy, nonatomic) NSSet *profileIdentifiers;
@property (weak, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) NSArray *knownTrackers;
@property (readonly, nonatomic) NSArray *preventedKnownTrackers;
@property (readonly, nonatomic) NSArray *blockedKnownTrackers;
@property (copy, nonatomic) NSArray *knownTrackersSortDescriptors;
@property (readonly, nonatomic) NSArray *trackedFirstParties;
@property (copy, nonatomic) NSArray *trackedFirstPartiesSortDescriptors;
@property (readonly, nonatomic) WBSKnownTrackingThirdParty *mostSeenKnownTracker;
@property (readonly, nonatomic) NSSet *trackerOwnerNames;
@property (readonly, nonatomic) double ratioOfTrackedFirstPartiesToAllVisited;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getKnownTrackingDomainsForWebView:(id)a0 after:(id)a1 before:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_clearCachedDataWithStrategy:(long long)a0 profiles:(id)a1;
+ (id)cachedNumberOfTrackersOnStartPageForProfileWithIdentifier:(id)a0;
+ (void)clearCachedDataForProfilesWithIdentifiers:(id)a0;
+ (void)clearCachedDataForProfilesWithIdentifiersNotInSet:(id)a0;
+ (void)setCachedNumberOfTrackersOnStartPage:(id)a0 forProfileWithIdentifier:(id)a1;

- (void)_loadDataForWebViewWithCompletionHandler:(id /* block */)a0;
- (void)_executePrefetchCompletionHandlers;
- (void)_prefetchData;
- (void)_addPrefetchCompletionHandler:(id /* block */)a0;
- (void)prefetchData;
- (void)_resetTrackedFirstPartiesSortDescriptors;
- (void)discardPrefetchedData;
- (id)initWithProfileIdentifiers:(id)a0 histories:(id)a1;
- (void)_loadDataWithCompletionHandler:(id /* block */)a0;
- (void)_resetKnownTrackersSortDescriptors;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void)_sortTrackedFirstParties;
- (void)_getResourceLoadStatisticsDataSummary:(id /* block */)a0;
- (void)loadDataFromStartDate:(id)a0 toEndDate:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_ingestPreventedThirdParties:(id)a0 blockedThirdParties:(id)a1 completionHandler:(id /* block */)a2;
- (void)_discardPrefetchedData;
- (id)_lastHistoryVisitForHighLevelDomain:(id)a0;
- (id)_dataWindowStartWithLoadedThirdParties:(id)a0 boundBy:(id)a1 earliestFirstParty:(id *)a2;
- (id)_dataWindowStartWithBlockedThirdParties:(id)a0 boundBy:(id)a1;
- (void)_sortKnownTrackers;
- (void)_getHighLevelHTTPFamilyDomainsFromHistoryVisitedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (id)getRecentFirstPartiesFromThirdParty:(id)a0;
- (void)_computeStatistics;

@end
