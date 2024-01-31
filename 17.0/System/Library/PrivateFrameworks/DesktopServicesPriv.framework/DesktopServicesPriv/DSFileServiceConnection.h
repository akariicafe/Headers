@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface DSFileServiceConnection : NSObject {
    NSObject<OS_dispatch_source> *_updateCurrentOperationsSource;
    NSMutableArray *_progresses;
    NSMutableDictionary *_progressTokenMap;
    NSMutableArray *_fileOperations;
}

@property (copy, nonatomic) id /* block */ didUpdateInProgressOperationsHandler;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_triggerReloadCurrentOperations;
- (BOOL)_addOperationForProgress:(id)a0;
- (void)_reloadCurrentOperations;
- (void)_removeOperationForProgress:(id)a0;
- (void)_subscribeToProgressIfNeeded:(id)a0;
- (void)requestInProgressOperationsWithResponseBlock:(id /* block */)a0;

@end
