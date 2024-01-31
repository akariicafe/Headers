@class HFItem, NSString, HMActionSet;
@protocol HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) unsigned long long actionSetItemStyle;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_primaryStateForActionSet:(id)a0 valueSource:(id)a1 logger:(id)a2 fastInitialUpdate:(BOOL)a3;
+ (BOOL)_value:(id)a0 isApproximatelyEqualToValue:(id)a1 forMinimumValue:(id)a2 maximumValue:(id)a3;

- (id)init;
- (id)rooms;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)executeActionSet;
- (id)initWithActionSet:(id)a0 actionSetItemStyle:(unsigned long long)a1 valueSource:(id)a2;
- (id)turnOffActionSet;
- (id)_mostCommonRoomForActionSet:(id)a0;
- (id)actionSetOperation:(id)a0 errorFromError:(id)a1;

@end
