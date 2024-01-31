@class NSString, NSSet;

@interface HMMNamedGroup : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *counters;
@property (retain, nonatomic) NSSet *valueStatistics;

+ (id)fetchRequest;

@end
