@class NSArray, NSString, STUsageDetailsViewModel;

@interface STSetupAssistantUsageDetailsCoordinator : NSObject <STUsageDetailsViewModelCoordinator>

@property (readonly, nonatomic) STUsageDetailsViewModel *viewModel;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *selectedDeviceIdentifier;
@property (readonly, getter=isRefreshing) BOOL refreshing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_introUsageItemsWithStartDate:(id)a0;
- (id)appConfigByIdentifier;
- (id)categoryConfigByIdentifier;
- (void)refreshUsageData;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;

@end
