@class NSSet;

@interface HUHomeHubPersonalDeviceWarningItemManager : HFItemManager

@property (retain, nonatomic) NSSet *devices;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 devices:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)itemForDevice:(id)a0;

@end
