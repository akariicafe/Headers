@class NSString, NSDictionary, NSURL, AVTCoreEnvironment, AVTArchiverBasedStoreRoot, NSArray;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@interface AVTArchiverBasedStoreBackend : NSObject <AVTStoreBackend>

@property (readonly, copy, nonatomic) NSURL *storeLocation;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (retain, nonatomic) AVTArchiverBasedStoreRoot *model;
@property (copy, nonatomic) NSDictionary *avatarsByIdentifiers;
@property (copy, nonatomic) NSArray *sortedAvatars;
@property (weak, nonatomic) id<AVTStoreBackendDelegate> backendDelegate;
@property (readonly, nonatomic) id<AVTAvatarRecordChangeTracker> recordChangeTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classifyRecordsByIdentifiers:(id)a0;
+ (id)rootByRemovingAvatarWithIdentifier:(id)a0 fromRoot:(id)a1;
+ (id)rootBySavingAvatarRecord:(id)a0 afterAvatarRecord:(id)a1 forDomainIdentifier:(id)a2 toRoot:(id)a3;
+ (id)storeLocationForDomainIdentifier:(id)a0 environment:(id)a1;

- (void).cxx_destruct;
- (id)avatarsForFetchRequest:(id)a0 error:(id *)a1;
- (void)loadModel:(id)a0;
- (BOOL)canCreateAvatarWithError:(id *)a0;
- (id)allAvatars;
- (unsigned long long)avatarCountWithError:(id *)a0;
- (id)avatarsExcludingIdentifiers:(id)a0 error:(id *)a1;
- (id)avatarsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)deleteAvatarWithIdentifier:(id)a0 error:(id *)a1;
- (id)duplicateAvatarRecord:(id)a0 error:(id *)a1;
- (id)initWithStoreLocation:(id)a0 domainIdentifier:(id)a1 environment:(id)a2;
- (BOOL)loadContentFromDisk:(id *)a0;
- (BOOL)loadContentFromDiskIfNeeded:(id *)a0;
- (BOOL)saveAvatar:(id)a0 error:(id *)a1;
- (BOOL)saveAvatars:(id)a0 error:(id *)a1;
- (BOOL)saveModel:(id)a0 logger:(id)a1 error:(id *)a2;

@end
