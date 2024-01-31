@class NSUUID, NSArray, NSString, NSMutableDictionary, NSMutableSet;
@protocol HMFTimerManager, HMMediaSystemStageManagerDataSource;

@interface HMMediaSystemStageManager : NSObject <HMFLogging, HMFTimerManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_committedMediaSystemsMap;
    NSMutableDictionary *_stagedAddedMediaSystemsMap;
    NSMutableSet *_stagedRemovedMediaSystemUUIDs;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMFTimerManager> addedMediaSystemTimerManager;
@property (readonly) id<HMFTimerManager> removedMediaSystemTimerManager;
@property (weak) id<HMMediaSystemStageManagerDataSource> dataSource;
@property (readonly, copy) NSArray *mediaSystems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)committedMediaSystems;
- (void)configureWithHome:(id)a0 context:(id)a1;
- (id)dataSourceContext;
- (id)dataSourceHome;
- (id)initWithIdentifier:(id)a0 mediaSystems:(id)a1;
- (id)initWithIdentifier:(id)a0 mediaSystems:(id)a1 addedMediaSystemTimerManager:(id)a2 removedMediaSystemTimerManager:(id)a3;
- (id)mediaSystemWithUUID:(id)a0;
- (id)mediaSystemWithUniqueIdentifier:(id)a0;
- (BOOL)mergeMediaSystems:(id)a0 withHome:(id)a1 context:(id)a2;
- (void)notifyDelegateOfAddedMediaSystem:(id)a0;
- (void)notifyDelegateOfAddedMediaSystem:(id)a0 usingHome:(id)a1 context:(id)a2;
- (void)notifyDelegateOfRemovedMediaSystem:(id)a0;
- (void)notifyDelegateOfRemovedMediaSystem:(id)a0 usingHome:(id)a1 context:(id)a2;
- (void)postConfigure;
- (void)setCommittedMediaSystems:(id)a0;
- (void)stageAddedMediaSystem:(id)a0;
- (void)stageRemovedMediaSystemUUID:(id)a0;
- (void)timerManager:(id)a0 didFireForTimerContext:(id)a1;
- (void)unconfigure;
- (void)unstageAndCommitMediaSystemWithUUID:(id)a0;
- (void)unstageAndCommitMediaSystems:(id)a0;
- (void)unstageExpiredStagedAddedMediaSystemUUID:(id)a0;
- (void)unstageExpiredStagedRemovedMediaSystemUUID:(id)a0;

@end
