@class NSSet, PACoalescingIntervalTracker, NSObject, PAAccessInterval;
@protocol OS_dispatch_source;

@interface PACoalescingIntervalState : NSObject {
    unsigned long long _continuousStartTime;
    unsigned long long _absoluteStartTime;
    unsigned long long _lastCoalescedTime;
    NSObject<OS_dispatch_source> *_endTimer;
    PACoalescingIntervalTracker *_tracker;
}

@property (readonly, nonatomic) PAAccessInterval *interval;
@property (readonly, nonatomic) double idleTime;
@property (readonly, nonatomic) double timestampAdjustment;
@property (readonly, nonatomic) NSSet *assetIdentifiers;

- (void)touch;
- (void)dealloc;
- (id)initWithInterval:(id)a0 matcher:(id)a1 tracker:(id)a2;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;

@end
