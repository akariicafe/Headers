@class NSArray, CLLocation, NSNumber;

@interface CAMLibrarySelectionSignalResult : NSObject

@property (retain, nonatomic) NSArray *identitiesInProximity;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) NSArray *homeLocations;
@property (readonly, nonatomic) NSArray *frequentAndHomeLocations;
@property (retain, nonatomic) NSNumber *suggestsSharingValue;
@property (readonly, nonatomic) int locationAuthorizationStatus;
@property (readonly, nonatomic) BOOL cameraHasAccessToLocation;
@property (readonly, nonatomic) BOOL isOnTrip;
@property (readonly, nonatomic) BOOL currentLocationCloseToHome;
@property (readonly, nonatomic) BOOL suggestsSharing;

+ (BOOL)currentLocation:(id)a0 isContainedInCircularRegions:(id)a1;
+ (double)distanceBetweenLocation:(id)a0 andCircularRegion:(id)a1 atDate:(id)a2;
+ (id)librarySelectionSignalResultWithIdentitiesInProximity:(id)a0 currentLocation:(id)a1 locationAuthorizationStatus:(int)a2 homeLocations:(id)a3 frequentLocations:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (id)_diagnosticsForRegions:(id)a0;
- (id)frequentLocationRegionContainingLocation:(id)a0;
- (id)initWithIdentitiesInProximity:(id)a0 currentLocation:(id)a1 locationAuthorizationStatus:(int)a2 homeLocations:(id)a3 frequentLocations:(id)a4;
- (id)resultDiagnostics;

@end
