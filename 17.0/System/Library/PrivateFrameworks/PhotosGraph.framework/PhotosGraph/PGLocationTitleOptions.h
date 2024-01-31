@class NSSet, PGGraphAddressNode;

@interface PGLocationTitleOptions : NSObject

@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) PGGraphAddressNode *keyAssetAddressNode;
@property (retain, nonatomic) NSSet *curationAddressNodes;
@property (nonatomic) unsigned long long aoiDisplayType;
@property (nonatomic) unsigned long long peopleDisplayType;
@property (nonatomic) BOOL useCities;
@property (nonatomic) BOOL showAllCities;
@property (nonatomic) BOOL useTripTitleForLongDuration;
@property (nonatomic) unsigned long long filterSignificantLocationsType;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic) BOOL useBusinessItems;
@property (nonatomic) BOOL useDistrict;
@property (nonatomic) BOOL allowFamilyHome;

+ (id)onlyPeopleLocationTitleOptions;

- (id)init;
- (void).cxx_destruct;

@end
