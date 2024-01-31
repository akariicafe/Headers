@class STOverallUsageSummaryCell, STRootViewModelCoordinator, STUsageDetailsViewModelCoordinator, NSNumber;

@interface STUsageSummaryTableViewCellProvider : NSObject

@property (readonly, copy, nonatomic) NSNumber *userDSID;
@property (retain, nonatomic) STUsageDetailsViewModelCoordinator *usageCoordinator;
@property (retain, nonatomic) STOverallUsageSummaryCell *legacyUsageCell;
@property (retain, nonatomic) STRootViewModelCoordinator *rootCoordinator;

+ (id)usageSummaryTableViewCellForUserDSID:(id)a0;

- (void)refresh;
- (void).cxx_destruct;
- (id)initWithUserDSID:(id)a0;
- (BOOL)shouldShowUsageSummaryForUser;
- (id)usageSummaryTableViewCellForUser;

@end
