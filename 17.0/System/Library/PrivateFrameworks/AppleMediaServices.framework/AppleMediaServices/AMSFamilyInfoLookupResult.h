@class NSDictionary, NSArray, NSNumber;

@interface AMSFamilyInfoLookupResult : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isCached) BOOL cached;
@property (readonly, nonatomic) NSArray *familyMembers;
@property (readonly, nonatomic) NSNumber *headOfHouseholdICloudDSID;
@property (readonly, nonatomic, getter=isHeadOfHouseholdSharingPayment) BOOL headOfHouseholdSharingPayment;

+ (id)_familyMembersFromDictionaryRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 cached:(BOOL)a1;

@end
