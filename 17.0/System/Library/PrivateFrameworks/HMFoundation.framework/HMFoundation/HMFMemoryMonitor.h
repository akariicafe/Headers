@class NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMFMemoryMonitor *memoryMonitor;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) long long systemMemoryState;
@property long long lastProcessMemoryState;
@property (retain, nonatomic) NSDate *lastProcessMemoryStateUpdateTime;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
