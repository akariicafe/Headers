@class NSString, NSSet;

@interface FBKUser : FBKManagedFeedbackObject

@property short environment;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *familyName;
@property (nonatomic) BOOL isSystemAccount;
@property (readonly, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSSet *contentItems;
@property (retain, nonatomic) NSSet *bugFormStubs;
@property (retain, nonatomic) NSSet *teams;
@property (readonly, nonatomic) NSSet *managedTeams;
@property (readonly, nonatomic) NSSet *activeTeams;
@property (readonly, nonatomic) NSSet *activeManagedTeams;
@property (readonly, nonatomic) NSSet *teamsContainingContent;
@property (readonly, nonatomic) BOOL hasManagedTeams;
@property (readonly, nonatomic) BOOL hasManyManagedTeams;
@property (retain, nonatomic) NSSet *announcementContentItems;
@property (retain, nonatomic) NSSet *formResponseContentItems;
@property (retain, nonatomic) NSSet *surveyContentItems;
@property (retain, nonatomic) NSSet *feedbackContentItems;
@property (nonatomic) BOOL didFetchContentItems;
@property (nonatomic) BOOL didFetchFormStubs;
@property (readonly, nonatomic) BOOL hasForms;
@property (readonly, nonatomic) BOOL isUnauthenticatedUser;

+ (id)entityName;
+ (id)createUserFromUserLoginInfo:(id)a0 forEnvironment:(short)a1 inContext:(id)a2;
+ (id)keyPathsForValuesAffectingOnlyPublic;
+ (id)uniqueFormStubsWithPreferredTeam:(id)a0 withForms:(id)a1;

- (id)bugFormStubsForPickerWithPredicate:(id)a0 team:(id)a1;
- (id)draftFormResponseIDs;
- (BOOL)isInAnyProgram;
- (BOOL)onlyPublic;
- (id)uniqueFormStubsWithPreferredTeam:(id)a0;

@end
