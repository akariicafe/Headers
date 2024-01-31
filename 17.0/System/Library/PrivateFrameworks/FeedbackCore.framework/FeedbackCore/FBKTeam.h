@class NSString, FBKTeamPermissions, NSSet, FBKUser, NSNumber;

@interface FBKTeam : FBKManagedFeedbackObject

@property (readonly, nonatomic) unsigned long long role;
@property (readonly, nonatomic) unsigned long long teamType;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL canStartNewFeedback;
@property (nonatomic) BOOL didFetchFormItems;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) FBKTeamPermissions *permissions;
@property (copy, nonatomic) NSNumber *remoteID;
@property (nonatomic) long long roleEnum;
@property (retain, nonatomic) NSSet *stakeholders;
@property (nonatomic) long long statusEnum;
@property (nonatomic) long long teamTypeEnum;
@property (copy, nonatomic) NSString *typeString;
@property (retain, nonatomic) NSSet *contentItems;
@property (retain, nonatomic) NSSet *forms;
@property (retain, nonatomic) NSSet *participants;
@property (retain, nonatomic) FBKUser *user;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)sortDescriptors;
+ (id)personalTeamForUser:(id)a0 inContext:(id)a1;

- (void)prepareForDeletion;
- (id)shortDescription;
- (void)setPropertiesFromJSONObject:(id)a0;
- (id)teamFormStubMatchingFromFormStub:(id)a0;

@end
