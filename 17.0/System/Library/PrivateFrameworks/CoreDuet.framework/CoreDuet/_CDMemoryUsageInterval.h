@class NSString;

@interface _CDMemoryUsageInterval : NSObject {
    unsigned long long _startingMemoryUsage;
    unsigned long long _startingLifetimeMaxMemoryUsage;
    unsigned long long _endingMemoryUsage;
    unsigned long long _endingLifetimeMaxMemoryUsage;
    unsigned long long _state;
    unsigned long long _startTime;
    BOOL _concurrentStart;
    BOOL _reset;
    unsigned long long _num;
    unsigned long long _concurrentPeakMemoryUsage;
    unsigned long long _peakMemoryUsage;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *client;

- (void)begin;
- (void)dealloc;
- (void)end;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 client:(id)a1;

@end
