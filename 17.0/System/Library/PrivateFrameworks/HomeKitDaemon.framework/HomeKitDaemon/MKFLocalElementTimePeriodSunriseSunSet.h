@class NSNumber, NSDateComponents, NSString;

@interface MKFLocalElementTimePeriodSunriseSunSet : MKFLocalElementTimePeriod

@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;

+ (id)fetchRequest;

@end
