@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DPSubmissionRateLimiter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *limiterQueue;
@property (retain, nonatomic) NSMutableDictionary *limitDictionary;

+ (id)sharedInstance;
+ (id)budgetNameForKey:(id)a0;
+ (id)rateLimitsFromBudgetProperties;

- (id)init;
- (unsigned long long)debit:(unsigned long long)a0 forKey:(id)a1;
- (void)credit:(id)a0 amount:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithLimits:(id)a0;

@end
