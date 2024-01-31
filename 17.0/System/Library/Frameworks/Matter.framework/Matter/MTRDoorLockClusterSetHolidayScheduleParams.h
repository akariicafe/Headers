@class NSNumber;

@interface MTRDoorLockClusterSetHolidayScheduleParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *holidayIndex;
@property (copy, nonatomic) NSNumber *localStartTime;
@property (copy, nonatomic) NSNumber *localEndTime;
@property (copy, nonatomic) NSNumber *operatingMode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
