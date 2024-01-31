@class NSString, HMMNamedGroup, NSDate;

@interface HMMNamedGroupValueStatistics : NSManagedObject

@property (nonatomic) long long count;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) long long max;
@property (nonatomic) long long min;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long sum;
@property (retain, nonatomic) HMMNamedGroup *group;

+ (id)fetchRequest;

@end
