@class NSArray, NSDictionary, FAFamilyMember, NSString, FAEligibilityRequirements, FAFamilyCloudKitProperties;

@interface FAFamilyCircle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) FAFamilyMember *remoteGuardianPerson;
@property (readonly) NSDictionary *_serverResponse;
@property (readonly, copy, nonatomic) NSArray *firstNames;
@property (readonly, copy, nonatomic) NSArray *invites;
@property (readonly, nonatomic) BOOL shouldShowInvites;
@property (readonly, copy, nonatomic) NSArray *pendingMembers;
@property (readonly, copy, nonatomic) NSArray *pendingMembersWithAllStatues;
@property (readonly, nonatomic) FAFamilyMember *me;
@property (readonly, nonatomic) NSString *childCutOffAge;
@property (readonly, nonatomic) BOOL canAddMembers;
@property (readonly, nonatomic) NSArray *allowedSubscriptions;
@property (readonly, copy, nonatomic) NSString *addMemberButtonLabel;
@property (readonly, copy, nonatomic) NSString *familyMembersFooterLabel;
@property (readonly, nonatomic) BOOL showAddMemberButton;
@property (readonly, nonatomic) BOOL showLocationSplashScreen;
@property (readonly, nonatomic) BOOL showRUIPages;
@property (readonly, nonatomic) long long ageCategory;
@property (readonly, nonatomic) int ageCategoryEnum;
@property (readonly, copy, nonatomic) NSString *familyID;
@property (readonly) NSArray *members;
@property (readonly) FAEligibilityRequirements *eligibilityRequirements;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;
@property (readonly) FAFamilyMember *remoteGuardian;
@property (readonly) BOOL currentUserIsU13;
@property (readonly) BOOL familyHasU13Member;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)memberForAltDSID:(id)a0;
- (id)initWithServerResponse:(id)a0;
- (BOOL)anyChildHasRemoteGuardians;
- (id)memberForPhoneNumber:(id)a0;
- (id)memberForDSID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
