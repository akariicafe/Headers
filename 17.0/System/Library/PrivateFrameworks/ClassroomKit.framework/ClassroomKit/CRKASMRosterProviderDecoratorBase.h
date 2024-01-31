@class NSArray, NSString, NSObject;
@protocol CRKASMRoster, CRKASMUserFetching, CRKASMRosterProviding;

@interface CRKASMRosterProviderDecoratorBase : NSObject <CRKASMRosterProviding>

@property (readonly, nonatomic) NSObject<CRKASMRosterProviding> *underlyingRosterProvider;
@property (readonly, nonatomic) id<CRKASMRoster> roster;
@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (readonly, nonatomic) id<CRKASMUserFetching> userFetcher;
@property (readonly, copy, nonatomic) NSArray *locationsWithManagePermissions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingLocationsWithManagePermissions;
+ (id)keyPathsForValuesAffectingPopulated;
+ (id)keyPathsForValuesAffectingRoster;

- (void)refresh;
- (void).cxx_destruct;
- (id)studentDirectoryForLocationIDs:(id)a0;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (BOOL)ingestCertificates:(id)a0 forTrustedUserIdentifier:(id)a1 error:(id *)a2;
- (id)initWithRosterProvider:(id)a0;
- (id)instructorDirectoryForLocationIDs:(id)a0;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;

@end
