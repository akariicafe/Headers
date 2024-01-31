@class CATOperationQueue, CATOperation, NSSet, NSObject;
@protocol CRKASMRoster, CRKIDSPrimitives, CRKASMRosterProviding;

@interface CRKIDSFirewallUpdatingRosterProvider : CRKASMRosterProviderDecoratorBase <CRKIDSLocalFirewallStorage>

@property (readonly, nonatomic) NSObject<CRKASMRosterProviding> *secondaryRosterProvider;
@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (nonatomic, getter=isObservingRosters) BOOL observingRosters;
@property (retain, nonatomic) id<CRKASMRoster> publishedRoster;
@property (weak, nonatomic) CATOperation *lastWorkOperation;
@property (copy, nonatomic) NSSet *allowedAppleIDs;

+ (id)observedKeyPaths;
+ (id)keyPathsForValuesAffectingRoster;
+ (id)trustedUserAppleIDsFromRoster:(id)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)rosterDidChange;
- (id)rosterProviders;
- (BOOL)areRosterProvidersPopulated;
- (void)beginObservingRosters;
- (void)endObservingRosters;
- (void)enqueueWorkOperation:(id)a0;
- (id)initWithPrimaryRosterProvider:(id)a0 secondaryRosterProvider:(id)a1 IDSPrimitives:(id)a2;
- (id)initWithRosterProvider:(id)a0 IDSPrimitives:(id)a1;
- (id)makeTrustedAppleIDs;
- (id)primaryRosterProvider;
- (id)roster;
- (void)synchronizeFirewallOperationDidFail:(id)a0;

@end
