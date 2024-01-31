@interface CoalitionMemoryUsage : NSObject

@property unsigned long long wired_size;
@property unsigned long long purgeable_size;
@property unsigned long long phys_footprint_size;
@property unsigned long long compressed_size;
@property unsigned long long process_count;
@property unsigned long long process_phys_footprint_size;
@property unsigned long long process_peak_phys_footprint;
@property int process_jetsam_priority;
@property unsigned long long compressed_lifetime;
@property long long ledger_swapins;

@end
