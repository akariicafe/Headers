@class HFCurrentZonesItem, HFItem, HMRoom, NSString, NSSet, HFStaticItemProvider, HFZoneSuggestionItemProvider, HFZoneItemProvider;

@interface HFZoneModule : HFItemModule <HFHomeObserver>

@property (retain, nonatomic) HFStaticItemProvider *expandedItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *createNewZoneItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *currentZoneItemProvider;
@property (retain, nonatomic) HFZoneItemProvider *zoneItemProvider;
@property (retain, nonatomic) HFZoneSuggestionItemProvider *zoneSuggestionItemProvider;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFItem *createNewZoneItem;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) HFCurrentZonesItem *currentZoneItem;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)home:(id)a0 didRemoveZone:(id)a1;
- (void)home:(id)a0 didAddZone:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1 toZone:(id)a2;
- (void).cxx_destruct;
- (void)home:(id)a0 didRemoveRoom:(id)a1 fromZone:(id)a2;
- (void)home:(id)a0 didUpdateNameForZone:(id)a1;
- (BOOL)canExpand;
- (BOOL)toggleExpansion;
- (void)_reloadItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 room:(id)a1;

@end
