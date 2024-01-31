@class NSSet, HFServiceGroupBuilder;

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager

@property (retain, nonatomic) NSSet *prioritizedRooms;
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder;

- (void).cxx_destruct;
- (id /* block */)_roomComparator;
- (id)_itemsToHideInSet:(id)a0;
- (BOOL)_shouldHideServiceItem:(id)a0 containedInServiceGroupItem:(id)a1;
- (id)initWithDelegate:(id)a0 shouldGroupByRoom:(BOOL)a1 itemProvidersCreator:(id /* block */)a2;
- (id)initWithServiceGroupBuilder:(id)a0 delegate:(id)a1;

@end
