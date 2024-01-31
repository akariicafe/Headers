@class NSString;

@interface OITSUPerformanceTest : NSObject {
    SEL mSelector;
    id mTarget;
}

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) struct TSUOpstat_s { BOOL running; unsigned long long count; struct timeval { long long tv_sec; int tv_usec; } min_time; struct timeval { long long tv_sec; int tv_usec; } max_time; struct timeval { long long tv_sec; int tv_usec; } total_time; struct timeval { long long tv_sec; int tv_usec; } last_time; } timing;
@property (nonatomic) double goalTime;
@property (nonatomic) double precision;
@property (nonatomic) BOOL quiet;
@property (readonly, nonatomic) BOOL passed;

+ (id)csvHeader;

- (void)run;
- (void)dealloc;
- (void)report;
- (id)csvString;
- (id)initWithName:(id)a0 selector:(SEL)a1 target:(id)a2 goalTime:(double)a3;

@end
