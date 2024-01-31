@class NSMutableArray;

@interface HKElectrocardiogramMoreHealthDataProvider : NSObject

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, nonatomic) long long count;

- (id)init;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItemWithIdentifier:(id)a0;
- (void)_configureLayoutForView:(id)a0 inCell:(id)a1;
- (id)_defaultCellWithBackgroundColor:(id)a0;
- (id)_itemViewForRow:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_offscreenInsets;
- (id)_sentinelCell;
- (id)cellForRow:(long long)a0 tableView:(id)a1;
- (id)unitTesting_itemsForIdentifiers:(id)a0;

@end
