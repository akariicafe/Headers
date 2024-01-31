@class STBlueprint, STDowntimeOverride;

@interface STBlueprintBackedDowntimeOverrideModifier : NSObject <STDowntimeOverrideModifier>

@property (readonly) STBlueprint *downtimeBlueprint;
@property (readonly, copy) STDowntimeOverride *activeOverride;

- (BOOL)_saveWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:(id)a0;
- (void)_tombstoneDowntimeOverride;
- (BOOL)applyDowntimeOverride:(id)a0 error:(id *)a1;
- (id)initWithDowntimeBlueprint:(id)a0;
- (BOOL)removeDowntimeOverrideWithError:(id *)a0;

@end
