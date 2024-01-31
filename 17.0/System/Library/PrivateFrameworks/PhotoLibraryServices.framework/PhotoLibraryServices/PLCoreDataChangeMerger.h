@class NSDictionary, NSObject, PLManagedObjectContextList;
@protocol OS_dispatch_queue;

@interface PLCoreDataChangeMerger : NSObject {
    PLManagedObjectContextList *_contextsToReceiveNotifications;
    NSObject<OS_dispatch_queue> *_mergeChangesQueue;
    BOOL _invalidated;
}

@property (nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;

- (void)handleUnknownMergeEvent;
- (void)refreshAllObjects;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)registerToReceiveCoreDataChanges:(id)a0;
- (void)mergeChangesFromRemoteContextSave:(id)a0 intoAllContextsNotIdenticalTo:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)allContextsNotIdenticalTo:(id)a0;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)a0 completionHandler:(id /* block */)a1;
- (id)allContexts;

@end
