@interface TRIStopwatch : NSObject {
    unsigned long long _start_time;
}

+ (id)start;

- (id)init;
- (unsigned long long)elapsed_ms;

@end
