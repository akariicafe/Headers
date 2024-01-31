@class NSSet, HUInstructionsItem, HFItemProvider, HMHome;

@interface HUFirmwareUpdateItemProvider : HFItemProvider

@property (class, readonly, copy, nonatomic) id /* block */ itemComparator;

@property (retain, nonatomic) HFItemProvider *linkedApplicationItemProvider;
@property (retain, nonatomic) NSSet *linkedApplicationItems;
@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (nonatomic) BOOL hasProvidedInstructionsItem;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) unsigned long long style;

+ (BOOL)prefersNonBlockingReloads;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id /* block */)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)a0 numberOfLinkedApplicationItems:(long long)a1;
- (id)_localizedDescriptionForAppName:(id)a0 accessoriesWithFirmwareUpdates:(id)a1 visibleAccessoryTileDisplayNames:(id)a2;
- (id)initWithHome:(id)a0 style:(unsigned long long)a1;
- (id)invalidationReasons;

@end
