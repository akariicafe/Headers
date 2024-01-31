@class NSString, PKSpendingSummary;

@interface PKDashboardSpendingSummaryItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKSpendingSummary *spendingSummary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
