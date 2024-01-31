@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)defaults;
+ (id)sharedInstance;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetDisabled;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)resetHarvestBudgetReserve;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (double)harvestBudgetReserve;
+ (BOOL)harvestBudgetRefillDisabled;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (BOOL)harvestBudgetDisabled;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;

- (id)defaults;
- (id)init;
- (void).cxx_destruct;

@end
