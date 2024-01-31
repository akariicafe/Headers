@class SGSqlEntityStore, NSObject;
@protocol OS_dispatch_queue;

@interface SGDSpotlightCommander : NSObject {
    id _deviceStateToken;
    SGSqlEntityStore *_store;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)_attemptToProcessRequests;
- (void)_registerForLockStateChange;
- (void)_issueCommand:(id)a0;
- (void)_executeReimportOfIdentifiers:(id)a0;
- (id)queryForPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2 contentTypes:(id)a3;
- (void)_unregisterForLockStateChange;
- (void)requestReimportFromIdentifier:(id)a0 forPersonHandle:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)_reimportQueryForPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2 requestId:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)_protectionClasses;
- (BOOL)_unlocked;
- (void)_reimportFromBundleId:(id)a0 protectionClasses:(id)a1 identifiers:(id)a2;
- (void)requestReimportForHistoricalDataRequest:(id)a0;
- (BOOL)_locked;

@end
