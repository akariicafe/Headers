@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface _CFPrefsSynchronizer : NSObject {
    NSObject<OS_dispatch_source> *_synchTimer;
    NSObject<OS_dispatch_queue> *_synchQueue;
    struct __CFSet { } *_dirtySources;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _CFPrefsDirtySourcesLock;
    BOOL _active;
}

- (id)init;

@end
