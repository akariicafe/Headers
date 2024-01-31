@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *intervalBudgetValue;
@property (retain, nonatomic) NSNumber *intervalCohortAggregateBudgetValue;
@property (retain, nonatomic) NSNumber *intervalChunksValue;
@property (retain, nonatomic) NSNumber *refillInterval;
@property (retain, nonatomic) NSNumber *refillAmount;

+ (id)allBudgetPropertiesKeys;
+ (void)initializeAllBudgetProperties;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesWithName:(id)a0 fromDictionary:(id)a1;
+ (id)budgetPropertiesFromFile:(id)a0;
+ (id)budgetPropertiesForKey:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dictionary:(id)a1;

@end
