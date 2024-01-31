@interface ProcessMonitorStats : NSObject

@property unsigned long long cpu_time;
@property unsigned long long cpu_time_diff;
@property BOOL shared_cache_reslid;

@end
