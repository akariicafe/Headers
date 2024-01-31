@interface PLBatteryUIResponseTypeBatteryBreakdownInternal : PLBatteryUIResponseTypeBatteryBreakdown

- (BOOL)showRootNodesInInternal;
- (void)filterEnergyEntries:(id)a0;
- (BOOL)filterFgBg:(id)a0 filterArray:(id)a1;
- (void)populateInternalRootNodeEnergyKeys:(id)a0;
- (BOOL)shouldShowBreakdown:(id)a0;

@end
