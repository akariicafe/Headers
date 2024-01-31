@class NSSet, HMCharacteristic;

@interface HFCustomCharacteristicActionSuggestionResult : NSObject

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) id targetValue;
@property (readonly, copy, nonatomic) NSSet *matchingExistingActions;
@property (nonatomic) BOOL isMutuallyExclusiveAction;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1 matchingActions:(id)a2;

@end
