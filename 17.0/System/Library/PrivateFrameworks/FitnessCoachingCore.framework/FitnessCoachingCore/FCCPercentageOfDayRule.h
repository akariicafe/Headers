@class NSString;

@interface FCCPercentageOfDayRule : NSObject <FCCDataSerializable>

@property (readonly, nonatomic) double minimumDayDuration;
@property (readonly, nonatomic) double percentOfDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMinimumDayDuration:(double)a0 percentOfDay:(double)a1;
- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (id)protobuf;
- (id)initWithProtobuf:(id)a0;

@end
