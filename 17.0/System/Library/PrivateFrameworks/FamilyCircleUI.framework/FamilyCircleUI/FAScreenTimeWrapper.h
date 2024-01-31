@class NSNumber, STUsageSummaryTableViewCellProvider;

@interface FAScreenTimeWrapper : NSObject

@property (nonatomic) NSNumber *userDSID;
@property (retain, nonatomic) STUsageSummaryTableViewCellProvider *provider;
@property (nonatomic) BOOL previousState;

- (void)refresh;
- (void).cxx_destruct;
- (BOOL)activityEnabledForUser;
- (BOOL)activityEnablementChanged;
- (id)getScreenTimeUsageGraphForUser;
- (id)initWithUserDSID:(id)a0;

@end
