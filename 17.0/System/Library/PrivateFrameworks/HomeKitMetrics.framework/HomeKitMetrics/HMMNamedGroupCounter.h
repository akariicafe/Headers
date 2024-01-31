@class NSString, HMMNamedGroup, NSDate;

@interface HMMNamedGroupCounter : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long value;
@property (retain, nonatomic) HMMNamedGroup *group;

+ (id)fetchRequest;

@end
