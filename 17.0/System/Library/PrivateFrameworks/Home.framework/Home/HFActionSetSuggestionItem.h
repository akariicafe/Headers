@class HFItem, NSString, HMActionSet, HMHome;
@protocol HFServiceLikeItem, HFHomeKitObject;

@interface HFActionSetSuggestionItem : HFItem <HFHomeKitItemProtocol>

@property (nonatomic) BOOL hasEverHadValidSuggestion;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMActionSet *actionSet;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) BOOL includeExistingActionSets;
@property (nonatomic) BOOL persistAddedSuggestions;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
