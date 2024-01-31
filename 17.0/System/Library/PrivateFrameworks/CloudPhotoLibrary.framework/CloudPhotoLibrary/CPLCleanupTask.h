@interface CPLCleanupTask : CPLEngineSyncTask

- (id)taskIdentifier;
- (void)launch;
- (void)_doOneIteration;
- (void)_cleanupSharingFlags;
- (void)taskDidFinishWithError:(id)a0;

@end
