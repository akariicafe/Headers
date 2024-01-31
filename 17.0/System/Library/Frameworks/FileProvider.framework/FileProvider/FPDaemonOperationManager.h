@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FPDaemonOperationManager : NSObject {
    BOOL _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)wakeUp;
- (void).cxx_destruct;
- (void)_enumerateNewDaemonOperationsWithHandler:(id /* block */)a0;
- (void)_receiveLongLivedOperation:(id)a0 info:(id)a1;
- (void)_updateDaemonOperations;
- (id)generateLocalOperationID;

@end
