@class NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, HMFTimerDelegate;

@interface HMFTimer : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    long long _leeway;
    BOOL _running;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) unsigned long long options;
@property (weak) id<HMFTimerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) unsigned long long leeway;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, copy) NSDate *fireDate;

+ (id)shortDescription;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)setFireDate:(id)a0;
- (void)fire;
- (void)kick;
- (id)initWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (void)__fire;
- (void)resume;
- (void)__handleExpiration;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
