@class NSString;

@interface FCCTimeOfDayRule : NSObject <FCCDataSerializable>

@property (readonly, nonatomic) double minimumDayDuration;
@property (readonly, nonatomic) double secondsBeforeEndOfDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (id)protobuf;
- (id)initWithProtobuf:(id)a0;
- (id)initWithMinimumDayDuration:(double)a0 secondsBeforeEndOfDay:(double)a1;

@end
