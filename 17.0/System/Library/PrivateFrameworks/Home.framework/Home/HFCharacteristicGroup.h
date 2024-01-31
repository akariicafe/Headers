@class NSString, NSSet;

@interface HFCharacteristicGroup : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long groupSortPriority;
@property (readonly, copy, nonatomic) NSSet *characteristicTypes;

+ (id)characteristicGroupForCharacteristicType:(id)a0;
+ (id)_currentTargetStateCharacteristicTypeMap;
+ (id)_targetCurrentStateCharacteristicGroups;
+ (id)_targetCurrentStateCharacteristicTypeMap;
+ (id)allCharacteristicGroups;
+ (id)characteristicGroupForIdentifier:(id)a0;
+ (id)groupedTitleForCharacteristicType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 title:(id)a1 characteristicTypes:(id)a2;

@end
