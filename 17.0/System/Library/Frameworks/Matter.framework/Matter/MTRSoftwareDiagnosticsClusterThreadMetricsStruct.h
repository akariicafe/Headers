@class NSNumber, NSString;

@interface MTRSoftwareDiagnosticsClusterThreadMetricsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *stackFreeCurrent;
@property (copy, nonatomic) NSNumber *stackFreeMinimum;
@property (copy, nonatomic) NSNumber *stackSize;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
