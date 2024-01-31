@class NSString, CPLScopeChange, NSData, NSObject;
@protocol OS_dispatch_queue, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportFetchTransportScopeTask;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask <CPLEngineSyncTaskDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CPLScopeChange *_previousScopeChange;
    id<CPLEngineTransportGetScopeInfoTask> _getLibraryInfo;
    id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
    NSData *_fetchedTransportScope;
    BOOL _retryingFetchingTransportScope;
    CPLScopeUpdateScopeTask *_lookForStagingScopeTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_updateScopeWithNewScopeType:(long long)a0 scope:(id)a1 updatedScopeChange:(id)a2 updatedFlags:(id)a3 oldTransportScope:(id)a4 updatedTransportScope:(id)a5 shouldUpdateTransportScope:(id /* block */)a6 store:(id)a7 transport:(id)a8 inTransaction:(id)a9;
+ (void)updateScopeWithNewScopeType:(long long)a0 scope:(id)a1 updatedScopeChange:(id)a2 updatedFlags:(id)a3 oldTransportScope:(id)a4 updatedTransportScope:(id)a5 shouldUpdateTransportScope:(id /* block */)a6 store:(id)a7 transport:(id)a8 inTransaction:(id)a9;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)taskIdentifier;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;
- (void)launch;
- (void).cxx_destruct;
- (void)cancel;
- (void)_getLibraryInfo;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void)_fetchTransportScope;
- (void)_lookForStagingScopeWithIdentifier:(id)a0 transportScope:(id)a1;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)a0;
- (void)_markScopeAsFeatureDisabledWithFlags:(id)a0;
- (void)_markScopeHasBadTransportScopeWithError:(id)a0;
- (void)_performAdditionalChecksWithNewScopeType:(long long)a0 updatedScopeChange:(id)a1 updatedFlags:(id)a2 oldTransportScope:(id)a3 updatedTransportScope:(id)a4 completionHandler:(id /* block */)a5;
- (void)_updateScopeChangeForPrimaryScopeRelatedToSharingScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateScopeWithNewScopeType:(long long)a0 updatedScopeChange:(id)a1 updatedFlags:(id)a2 oldTransportScope:(id)a3 updatedTransportScope:(id)a4;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;

@end
