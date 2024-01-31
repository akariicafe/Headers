@class CPLConfiguration, NSURL, CPLStatus, NSObject;
@protocol CPLLibraryManagerDelegate, CPLResourceProgressDelegate, CPLLibraryManagerForceSyncDelegate, OS_dispatch_queue;

@interface PLFakeCPLLibraryManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *fakeBaseURL;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) CPLStatus *syncStatus;
@property (readonly, nonatomic) CPLConfiguration *configuration;
@property (readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
@property (readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property (readonly, nonatomic) unsigned long long numberOfImagesToUpload;
@property (readonly, nonatomic) unsigned long long numberOfVideosToUpload;
@property (readonly, nonatomic) unsigned long long numberOfOtherItemsToUpload;
@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (weak, nonatomic) id<CPLLibraryManagerDelegate> delegate;
@property (weak, nonatomic) id<CPLResourceProgressDelegate> resourceProgressDelegate;
@property (weak, nonatomic) id<CPLLibraryManagerForceSyncDelegate> forceSyncDelegate;

+ (id)forwardingTargetForSelector:(SEL)a0;
+ (id)fakeCPLStatusBaseURLWithBaseURL:(id)a0;

- (void)reportMiscInformation:(id)a0;
- (void)fetchSharedScopeFromShareURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)a0;
- (void)getScopeStatusCountsForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportSetting:(id)a0 hasBeenEnabled:(BOOL)a1;
- (void)noteClientIsInBackground;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)a0;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)a0;
- (void)createScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptSharedScope:(id)a0 completionHandler:(id /* block */)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)removeParticipants:(id)a0 fromSharedScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(long long)a3 completionHandler:(id /* block */)a4;
- (void)noteClientIsBeginningSignificantWork;
- (void)checkResourcesAreSafeToPrune:(id)a0 checkServerIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)a0;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStatusForComponents:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)deactivateWithCompletionHandler:(id /* block */)a0;
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)setShouldOverride:(BOOL)a0 forSystemBudgets:(unsigned long long)a1;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 highPriority:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reportSetting:(id)a0 hasBeenSetToValue:(id)a1;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)beginInMemoryDownloadOfResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteResources:(id)a0 checkServerIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)a0 maximumCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)startExitFromSharedScopeWithIdentifier:(id)a0 retentionPolicy:(long long)a1 exitSource:(long long)a2 completionHandler:(id /* block */)a3;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateShareForScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceBackupWithCompletionHandler:(id /* block */)a0;
- (void)boostPriorityForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteClientIsInForegroundQuietly:(BOOL)a0;
- (void)forceSynchronizingScopeWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientLibraryBaseURL:(id)a0 cloudLibraryStateStorageURL:(id)a1 cloudLibraryResourceStorageURL:(id)a2 libraryIdentifier:(id)a3 options:(unsigned long long)a4;
- (void)queryUserDetailsForShareParticipants:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStreamingURLOrMediaMakerDataForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 clientBundleID:(id)a4 completionHandler:(id /* block */)a5;
- (void)createOwnedLibraryShareScopeWithShare:(id)a0 title:(id)a1 completionHandler:(id /* block */)a2;
- (void)noteClientIsEndingSignificantWork;
- (void)activateScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
