@class NSString, HMNetworkRouterProfile;
@protocol HFAccessoryRepresentable, HFHomeKitObject;

@interface HFNetworkRouterItem : HFAccessoryProfileItem <HFAccessoryRepresentableItem>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMNetworkRouterProfile *profile;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;

- (id)_subclass_updateWithOptions:(id)a0;

@end
