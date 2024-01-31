@class NSString, NSMutableDictionary;

@interface AKCAReporter : NSObject {
    NSString *_eventName;
    NSMutableDictionary *_reportData;
    unsigned long long _initTime;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _clock_timebase;
}

- (id)initWithEvent:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)a0;
- (void)sendReport;

@end
