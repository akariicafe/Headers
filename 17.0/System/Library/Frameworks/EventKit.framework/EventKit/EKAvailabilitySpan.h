@class NSString, NSDate;

@interface EKAvailabilitySpan : NSObject <CalDateRangeProtocol>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
