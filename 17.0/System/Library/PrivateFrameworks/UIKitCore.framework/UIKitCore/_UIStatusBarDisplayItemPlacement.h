@class NSSet, NSDictionary, NSHashTable, _UIStatusBarIdentifier;

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized>

@property (nonatomic) long long priority;
@property (readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier;
@property (readonly, copy, nonatomic) NSHashTable *excludedPlacements;
@property (readonly, copy, nonatomic) NSSet *excludedRegionIdentifiers;
@property (readonly, copy, nonatomic) NSHashTable *includedPlacements;
@property (readonly, copy, nonatomic) NSHashTable *allRequiredPlacements;
@property (readonly, copy, nonatomic) NSHashTable *anyRequiredPlacements;
@property (readonly, copy, nonatomic) NSDictionary *itemInfo;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)spacerPlacementWithSize:(struct CGSize { double x0; double x1; })a0 priority:(long long)a1;
+ (id)placementWithIdentifier:(id)a0 priority:(long long)a1;

- (id)requiringAnyPlacements:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)requiringAllPlacements:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)disabledPlacement;
- (id)withItemInfo:(id)a0;
- (id)excludingAllPlacementsInRegions:(id)a0 exceptPlacements:(id)a1;
- (id)excludingPlacements:(id)a0;
- (id)excludingAllPlacementsInRegions:(id)a0;

@end
