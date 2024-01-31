@class CSSearchQuery, NSString, NSSet, NSDictionary, PLDatabaseContext, PLSyndicationSyncManager;

@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker <PLSyndicationSyncManagerDelegate> {
    PLSyndicationSyncManager *_syncManager;
    NSSet *_supportedQueryTypes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cancelled;
    NSDictionary *_currentWorkItem;
    CSSearchQuery *_currentQuery;
    PLDatabaseContext *_databaseContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)isInterruptible;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 itemHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)_hasPendingChatJobsInLibrary:(id)a0;
- (BOOL)_hasPendingAttachmentJobsInLibrary:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (BOOL)syncManager:(id)a0 shouldContinueWithLibrary:(id)a1;
- (id)_syndicationStartingDateInLibrary:(id)a0;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (BOOL)_hasPendingDeleteJobsInLibrary:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (id)_workItemsBatchedFromDate:(id)a0 library:(id)a1 type:(long long)a2;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 batchHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)_needsSyndicationFullIndexSyncInLibrary:(id)a0;
- (BOOL)_supportsSyndicationQueryType:(long long)a0;
- (BOOL)_hasPendingJobsBasedOnLastSyncDate:(id)a0;

@end
