@class NSNumber, NSArray;

@interface MTRThermostatClusterGetWeeklyScheduleResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *numberOfTransitionsForSequence;
@property (copy, nonatomic) NSNumber *dayOfWeekForSequence;
@property (copy, nonatomic) NSNumber *modeForSequence;
@property (copy, nonatomic) NSArray *transitions;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
