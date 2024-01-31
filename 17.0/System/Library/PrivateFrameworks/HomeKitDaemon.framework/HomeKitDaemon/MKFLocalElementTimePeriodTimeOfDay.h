@class NSNumber;

@interface MKFLocalElementTimePeriodTimeOfDay : MKFLocalElementTimePeriod

@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;

+ (id)fetchRequest;

@end
