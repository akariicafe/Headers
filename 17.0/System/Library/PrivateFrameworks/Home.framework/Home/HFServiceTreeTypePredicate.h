@class NSSet, NAIdentity, NSString;

@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSSet *serviceTypes;
@property (readonly, copy, nonatomic) NSSet *serviceSubtypes;
@property (readonly, nonatomic) BOOL includeChildServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anyServiceTypePredicate;
+ (id)anyServiceTypePredicateIncludingChildServices;
+ (id)predicateWithServiceType:(id)a0;
+ (id)predicateWithServiceType:(id)a0 includeChildServices:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)matchingServicesForRootService:(id)a0;
- (BOOL)_matchesService:(id)a0;
- (id)initWithServiceTypes:(id)a0 serviceSubtypes:(id)a1 includeChildServices:(BOOL)a2;

@end
