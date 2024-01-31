@class NSHashTable;

@interface _CDMemoryUsageIntervalTracker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _counter;
    unsigned long long _activeMemoryLimit;
    NSHashTable *_activeIntervals;
    unsigned long long _intervalTimeout;
}

- (id)init;
- (void).cxx_destruct;

@end
