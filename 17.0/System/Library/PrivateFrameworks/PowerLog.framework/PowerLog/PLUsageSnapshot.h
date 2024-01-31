@class NSDate;

@interface PLUsageSnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuUsage;

- (id)description;
- (void).cxx_destruct;

@end
