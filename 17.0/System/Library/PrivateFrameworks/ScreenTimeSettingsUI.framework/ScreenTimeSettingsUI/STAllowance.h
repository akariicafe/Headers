@class NSArray, NSString, NSDictionary, NSDateComponents;

@interface STAllowance : NSObject <NSCopying>

@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSArray *webDomains;
@property (copy) NSArray *categoryIdentifiers;
@property BOOL allowanceEnabled;
@property (nonatomic) BOOL shouldAllowEditing;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double timeToday;
@property (nonatomic) unsigned long long behaviorType;
@property (readonly, copy) NSString *scheduleText;
@property (copy, nonatomic) NSDateComponents *time;
@property (copy, nonatomic) NSDictionary *timeByDay;

+ (id)dateComponentsForDuration:(double)a0;
+ (double)timeIntervalForAllowanceDateComponents:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)defaultBudgetTime;
- (id)defaultTimeByDay;
- (id)initWithBlueprint:(id)a0;

@end
