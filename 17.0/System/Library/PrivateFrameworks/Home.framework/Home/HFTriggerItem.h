@class HFServiceActionItemProvider, NSString, HMTrigger, HMHome;
@protocol HFHomeKitObject;

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol>

@property (retain, nonatomic) HFServiceActionItemProvider *serviceActionItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (nonatomic) BOOL usesRichIconDescriptors;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 trigger:(id)a1;
- (id)createRichIconDescriptors:(id)a0 options:(id)a1;
- (id)translateToRichIconDescriptors:(id)a0 basedOnActionItems:(id)a1;

@end
