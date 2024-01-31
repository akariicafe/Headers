@class NTKSnapshotRequest;

@interface NTKSnapshotToken : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_priority;
    id /* block */ _callback;
    NTKSnapshotRequest *_request;
}

@property (nonatomic) unsigned long long priority;

- (id /* block */)callback;
- (void)setRequest:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPriority:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)stopObservingCallbacks;

@end
