@class NSSet, NSString, HMCHIPEcosystem;
@protocol HFHomeKitObject;

@interface HUMatterAccessoryConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol>

@property (readonly, nonatomic) HMCHIPEcosystem *connectedEcosystem;
@property (readonly, nonatomic) NSSet *chipAccessoryPairings;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithConnectedEcosystem:(id)a0 chipAccessoryPairings:(id)a1;

@end
