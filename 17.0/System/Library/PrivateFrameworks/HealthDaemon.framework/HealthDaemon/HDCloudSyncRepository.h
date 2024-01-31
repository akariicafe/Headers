@class NSString, NSArray, HDProfile, NSSet, HDCloudSyncAvailability, HDCloudCacheBehavior, CKContainer;

@interface HDCloudSyncRepository : NSObject

@property (nonatomic) unsigned long long repositorySettings;
@property (readonly, nonatomic) int deviceMode;
@property (readonly, nonatomic) BOOL shouldPushToUnifiedZone;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) CKContainer *primaryCKContainer;
@property (readonly, nonatomic) NSArray *secondaryCKContainers;
@property (readonly, nonatomic) NSSet *allCKContainers;
@property (readonly, nonatomic) HDCloudSyncAvailability *syncAvailability;
@property (readonly, nonatomic) HDCloudCacheBehavior *cacheBehavior;
@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, copy, nonatomic) NSString *userRecordName;

- (void)cacheAllOwnerIdentifiersWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)a0 syncCircleIdentifier:(id)a1 primaryCKContainer:(id)a2 secondaryCKContainers:(id)a3 userRecordName:(id)a4;
- (id)containerForContainerIdentifier:(id)a0;
- (void)unitTest_setShouldPushToUnifiedZone:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)cachedOwnerIdentifierForContainer:(id)a0;

@end
