@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation

@property (retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo;

+ (BOOL)adopterProvidedLookupInfos;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_discoverIdentitiesBatched:(id)a0;
- (void)_handleDiscoveredIdentity:(id)a0 lookupInfo:(id)a1 responseCode:(id)a2;
- (void)_populateFakeUnitTestLookupInfos:(id)a0;
- (void)_populateRealUserIdentityLookupInfos;
- (void)_populateUserIdentityLookupInfos;

@end
