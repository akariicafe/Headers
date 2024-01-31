@class HMZone, NAIdentity, NSString, HMHome;
@protocol HFHomeKitObject;

@interface HFZoneItem : HFItem <NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMZone *zone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)hf_canDeleteItem;
- (id)hf_deleteItem;
- (id)initWithHome:(id)a0 zone:(id)a1;

@end
