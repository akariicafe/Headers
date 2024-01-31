@class NSArray, NSString, NSMutableDictionary;

@interface WBSContentBlockerStatisticsInMemoryStore : NSObject <WBSContentBlockerStatisticsStore> {
    NSMutableDictionary *_firstPartiesByBlockedThirdParty;
}

@property (class, readonly, copy, nonatomic) NSArray *allStores;
@property (class, readonly, nonatomic) long long totalBlockedTrackerCount;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 onFirstParty:(id)a2 completionHandler:(id /* block */)a3;
- (void)recordThirdPartyResourceBlocked:(id)a0 onFirstParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearStatisticsForDomains:(id)a0;
- (void)clearStatisticsAfter:(id)a0 before:(id)a1;
- (void).cxx_destruct;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 completionHandler:(id /* block */)a2;
- (void)_clearStatisticsPassingTest:(id /* block */)a0;
- (void)_clearUnusedDomains;

@end
