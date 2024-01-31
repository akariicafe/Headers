@class NSMutableArray;

@interface HKRateLimiter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_history;
}

@property (readonly) unsigned long long limit;
@property (readonly) double timeInterval;

- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0 timeInterval:(double)a1;
- (BOOL)perform:(id /* block */)a0 cost:(unsigned long long)a1;

@end
