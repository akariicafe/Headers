@class STDrillInItemInfoGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STDrillInUsageGroupSpecifierProvider, STUsageItem, STAllowanceProgressGroupSpecifierProvider;

@interface STDrillInDetailListController : STPINListViewController

@property (readonly, nonatomic) STUsageItem *usageItem;
@property (readonly, nonatomic) STDrillInUsageGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (readonly, nonatomic) STDrillInItemInfoGroupSpecifierProvider *drillInItemInfoGroupSpecifierProvider;
@property (readonly, nonatomic) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider;
@property (readonly, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (BOOL)canBeShownFromSuspendedState;
- (void)_didFetchAppInfo:(id)a0;
- (id)initWithUsageItem:(id)a0 coordinator:(id)a1;

@end
