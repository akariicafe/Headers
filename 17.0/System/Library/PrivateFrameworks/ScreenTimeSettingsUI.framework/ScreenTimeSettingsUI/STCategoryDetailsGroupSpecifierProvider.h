@class NSObject, STUsageDetailsViewModel;
@protocol STRootViewModelCoordinator;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel;
@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (id)initWithCategoryUsageItem:(id)a0 coordinator:(id)a1;
- (void)showMostUsedDetailListController:(id)a0;
- (id)totalUsageDescription:(id)a0;

@end
