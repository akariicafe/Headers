@class NSMutableDictionary;

@interface HMDHAPAccessoryTaskTracker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _currentTaskIdentifier;
}

@property (readonly) NSMutableDictionary *pendingTasks;
@property (readonly) unsigned long long nextTaskIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)executeTask:(id)a0;
- (id)pendingRemoteTasks;
- (void)removePendingTaskWithIdentifier:(id)a0;

@end
