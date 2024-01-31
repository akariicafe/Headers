@class STUIStatusBarDisplayItemPlacementCellularGroup, STUIStatusBarDisplayItemPlacementWifiGroup;

@interface STUIStatusBarDisplayItemPlacementNetworkGroup : STUIStatusBarDisplayItemPlacementGroup

@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacementCellularGroup *cellularGroup;
@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacementWifiGroup *wifiGroup;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 cellularItemClass:(Class)a2 wifiItemClass:(Class)a3 includeCellularName:(BOOL)a4;
+ (id)_groupWithCellularGroup:(id)a0 wifiGroup:(id)a1 includeCellularName:(BOOL)a2;
+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 cellularItemClass:(Class)a2 wifiItemClass:(Class)a3 cellularTypeClass:(Class)a4 includeCellularName:(BOOL)a5 allowDualNetwork:(BOOL)a6;
+ (id)secondaryGroupWithHighPriority:(long long)a0 lowPriority:(long long)a1 cellularItemClass:(Class)a2 wifiItemClass:(Class)a3;

- (void).cxx_destruct;

@end
