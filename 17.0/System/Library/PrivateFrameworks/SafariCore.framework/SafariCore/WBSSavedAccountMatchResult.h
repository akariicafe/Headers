@class NSArray, WBSPasskeyAutoFillFromNearbyDeviceOptions;

@interface WBSSavedAccountMatchResult : NSObject

@property (readonly, copy, nonatomic) NSArray *exactMatches;
@property (readonly, copy, nonatomic) NSArray *potentialMatches;
@property (readonly, copy, nonatomic) NSArray *associatedDomainMatches;
@property (readonly, copy, nonatomic) WBSPasskeyAutoFillFromNearbyDeviceOptions *nearbyDeviceOptions;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)addUniqueHostUserToMatches;
- (id)initWithExactMatches:(id)a0 potentialMatches:(id)a1 associatedDomainMatches:(id)a2 nearbyDeviceOptions:(id)a3;
- (id)matchesForPasswordAutoFill;
- (id)orderedMatches;

@end
