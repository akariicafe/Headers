@class NSString, NSUUID, NSDictionary;

@interface PBFPosterRoleCoordinatorChange : NSObject

@property (readonly, copy, nonatomic) NSString *changeType;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)addPosterToRole:(id)a0 incomingPoster:(id)a1;
+ (id)removeAttributeFromPosterWithinRole:(id)a0 matchingUUID:(id)a1 attributeType:(id)a2;
+ (id)assignAttributeToPosterWithinRole:(id)a0 matchingUUID:(id)a1 attribute:(id)a2;
+ (id)distillArrayOfChangesIntoChangesOrderedByPosterRoleEntropy:(id)a0;
+ (id)duplicatePosterWithinRole:(id)a0 matchingUUID:(id)a1 toUUID:(id)a2;
+ (id)refreshRoleCoordinator:(id)a0;
+ (id)removePosterFromRole:(id)a0 matchingUUID:(id)a1;
+ (id)reorderPostersForRole:(id)a0 sortedPosterUUIDs:(id)a1;
+ (id)resetRole:(id)a0;
+ (id)selectPosterForRole:(id)a0 matchingUUID:(id)a1;
+ (id)updateConfiguredProperties:(id)a0 forPosterWithinRole:(id)a1 matchingUUID:(id)a2;
+ (id)updatePosterWithinRole:(id)a0 incomingPoster:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isValidWithError:(out id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 role:(id)a1 userInfo:(id)a2;
- (BOOL)isEqualToChange:(id)a0;

@end
