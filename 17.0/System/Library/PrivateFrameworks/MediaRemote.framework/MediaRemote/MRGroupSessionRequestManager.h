@class MRGroupSessionInfo, MRUserIdentity;

@interface MRGroupSessionRequestManager : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL hasPopulatedIdentity;
@property (readonly, nonatomic) MRGroupSessionInfo *groupSessionInfo;
@property (retain, nonatomic) MRUserIdentity *localUserIdentity;

+ (id)sharedManager;

- (id)init;
- (void)restoreState;
- (void).cxx_destruct;
- (void)registerObservers;
- (void)augmentLocalCommandOptions:(id)a0;
- (void)handleGroupSessionNearbyContactDiscoveryDidChange:(id)a0;
- (void)updateGroupSessionInfo:(id)a0;
- (void)updateLocalIdentity:(id)a0;

@end
