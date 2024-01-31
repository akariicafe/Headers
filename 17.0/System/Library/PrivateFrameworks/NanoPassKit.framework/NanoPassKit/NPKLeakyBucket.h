@class NSString, NSTimer, NSDate, NSMutableArray;

@interface NPKLeakyBucket : NSObject {
    NSMutableArray *_events;
    NSString *_description;
    NSDate *_lastLeakedEventDate;
    NSTimer *_eventTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) double eventsTimeInterval;
@property (readonly, nonatomic) unsigned long long maxBucketSize;

+ (id)throttleWithEventsTimeInterval:(double)a0 description:(id)a1;

- (void)dealloc;
- (void)flush;
- (void).cxx_destruct;
- (BOOL)addEvent:(id /* block */)a0;
- (void)_insideLock_scheduleNextEventLeakFromReferenceDate:(id)a0;
- (id)initWithEventsTimeInterval:(double)a0 maxBucketSize:(unsigned long long)a1 description:(id)a2;

@end
