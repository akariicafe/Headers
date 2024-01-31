@class NSString, NSDate;

@interface _DASWidgetRefresh : _DASWidgetInfo

@property (readonly, nonatomic) NSDate *refreshDate;
@property (nonatomic) BOOL isDASInitiated;
@property (copy, nonatomic) NSString *refreshReason;
@property (readonly, nonatomic) NSString *rateLimitConfigurationName;

+ (id)refreshAt:(id)a0 forWidgetID:(id)a1;

- (id)initWithRateLimitConfigurationName:(id)a0 budgetID:(id)a1 extensionBundleID:(id)a2 refreshDate:(id)a3 initiatedByDAS:(BOOL)a4;
- (id)initWithBudgetID:(id)a0 extensionBundleID:(id)a1 refreshDate:(id)a2;
- (void).cxx_destruct;

@end
