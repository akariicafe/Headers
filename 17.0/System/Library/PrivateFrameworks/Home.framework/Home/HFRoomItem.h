@class HMHome, HMRoom, NSString;
@protocol HFHomeKitObject;

@interface HFRoomItem : HFItem <HFReorderableItemListItemProtocol, HFHomeKitItemProtocol>

@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 room:(id)a1;
- (id)_reorderableListsForAccessoryTypes;
- (id)togglePowerState;

@end
