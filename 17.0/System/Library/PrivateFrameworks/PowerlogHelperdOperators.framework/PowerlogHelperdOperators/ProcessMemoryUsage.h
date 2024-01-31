@class NSString;

@interface ProcessMemoryUsage : NSObject

@property BOOL isDaemonXPCService;
@property (retain) NSString *processName;
@property (retain) NSString *bundleId;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *coalitionLaunchdName;
@property unsigned long long phys_footprint_size;
@property unsigned long long peak_phys_footprint;
@property unsigned long long interval_peak_phys_footprint;
@property int jetsam_priority;
@property BOOL process_active;

- (void).cxx_destruct;

@end
