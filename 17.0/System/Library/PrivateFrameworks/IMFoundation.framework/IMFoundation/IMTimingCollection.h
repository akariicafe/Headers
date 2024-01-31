@class NSMutableDictionary;

@interface IMTimingCollection : NSObject {
    NSMutableDictionary *_timings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (BOOL)hasKey:(id)a0;
- (id)description;
- (double)totalTimeForKey:(id)a0;
- (void)removeTimingForKey:(id)a0;
- (void)startTimingForKey:(id)a0;
- (void).cxx_destruct;
- (void)stopTimingForKey:(id)a0;

@end
