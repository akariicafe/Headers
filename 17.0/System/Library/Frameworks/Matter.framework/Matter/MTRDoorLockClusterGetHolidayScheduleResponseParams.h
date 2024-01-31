@class NSNumber;

@interface MTRDoorLockClusterGetHolidayScheduleResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *holidayIndex;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *localStartTime;
@property (copy, nonatomic) NSNumber *localEndTime;
@property (copy, nonatomic) NSNumber *operatingMode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
