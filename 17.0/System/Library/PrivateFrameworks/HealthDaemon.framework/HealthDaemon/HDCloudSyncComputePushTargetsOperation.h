@class NSString, HDSynchronousTaskGroup, HDSyncIdentity;

@interface HDCloudSyncComputePushTargetsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
    HDSyncIdentity *_currentSyncIdentity;
    BOOL _hasUpgradedToSyncIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishedOperationTags;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void).cxx_destruct;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
