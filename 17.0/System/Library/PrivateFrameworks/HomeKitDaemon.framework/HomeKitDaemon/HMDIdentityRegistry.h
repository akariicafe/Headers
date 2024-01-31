@class HMDHomeManager, NSArray, NSRecursiveLock, NSString, NSMutableArray;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState> {
    NSMutableArray *_registeredIdentities;
}

@property (weak) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly) NSArray *registeredIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;
+ (id)logCategory;

- (id)init;
- (void)reset;
- (id)dumpState;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)identityForIdentifier:(id)a0;
- (id)identitiesForAccountIdentifier:(id)a0;
- (void)registerIdentity:(id)a0 device:(id)a1 object:(id)a2;
- (id)_userForIdenity:(id)a0;
- (id)accountsForIdentity:(id)a0;
- (void)configureWithHomeManager:(id)a0;
- (void)deregisterIdentity:(id)a0 object:(id)a1;
- (id)identitiesForAccount:(id)a0;
- (id)identitiesForDevice:(id)a0;
- (void)registerIdentity:(id)a0 account:(id)a1 object:(id)a2;
- (id)userForDevice:(id)a0;

@end
