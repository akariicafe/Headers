@class NSNumber, NSString;

@interface MTRSoftwareDiagnosticsClusterThreadMetrics : MTRSoftwareDiagnosticsClusterThreadMetricsStruct

@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *stackFreeCurrent;
@property (copy, nonatomic) NSNumber *stackFreeMinimum;
@property (copy, nonatomic) NSNumber *stackSize;

@end
