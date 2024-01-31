@interface ATXUIFeedbackMetrics : NSObject

@property (nonatomic) unsigned long long impressionCount;
@property (nonatomic) unsigned long long engagementCount;
@property (nonatomic) unsigned long long rejectionCount;
@property (readonly, nonatomic) double engagementRate;
@property (readonly, nonatomic) double rejectionRate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXUIFeedbackMetrics:(id)a0;

@end
