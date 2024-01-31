@class NSString, BKSHIDEventAuthenticationOriginator, BKSHIDEventDisplay, NSMutableDictionary, NSDictionary, BSMutableIntegerMap, NSMutableArray, NSSet;
@protocol BKHIDEventBufferingHIDSystem, BKHIDEventDeliveryResolutionObserver;

@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_deliveryRoots;
    NSMutableArray *_keyCommandDeliveryRoots;
    NSMutableDictionary *_buffersByDispatchTarget;
    BSMutableIntegerMap *_deferringRulesByPID;
    BSMutableIntegerMap *_bufferingPredicatesByPID;
    BSMutableIntegerMap *_clientsByPID;
    NSSet *_deferringResolutions;
    NSMutableDictionary *_destinationCacheBySender;
}

@property (retain, nonatomic) id<BKHIDEventDeliveryResolutionObserver> resolutionObserver;
@property (nonatomic) BOOL observeClientDeath;
@property (retain, nonatomic) id<BKHIDEventBufferingHIDSystem> bufferingDispatcher;
@property (readonly, nonatomic) NSDictionary *currentBuffersPerDispatchTarget;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay;
@property (readonly, nonatomic) BKSHIDEventAuthenticationOriginator *authenticationOriginator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithObserverService:(id)a0;
- (void)dealloc;
- (void)setKeyCommandDispatchingRules:(id)a0 forClientWithPID:(int)a1;
- (id)sequenceForFirstEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1 processor:(id)a2 dispatcher:(id)a3 additionalContext:(id)a4;
- (void)setDispatchingRuleSets:(id)a0 forClientWithPID:(int)a1;
- (void)reevaluateBufferingWithContext:(id)a0;
- (id)descriptionOfResolutionPathForKeyCommand:(id)a0 senderDescriptor:(id)a1;
- (id)_test_deliveryRootForIdentifier:(id)a0;
- (void)_test_terminateClientPID:(int)a0;
- (void)setDeferringRules:(id)a0 forClientWithPID:(int)a1;
- (id)destinationsForEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1;
- (void)setKeyCommandsRegistrations:(id)a0 forClientWithPID:(int)a1;
- (id)destinationsStartingFromPID:(int)a0 deferringPredicate:(id)a1;
- (void)_fireTimeoutForPID:(int)a0 bufferingPredicates:(id)a1 client:(id)a2;
- (void)clientDied:(id)a0;
- (void)setEventBufferingPredicates:(id)a0 forClientWithPID:(int)a1;
- (void).cxx_destruct;
- (id)sequenceForKeyCommand:(id)a0 sender:(id)a1 processor:(id)a2 dispatcher:(id)a3 additionalContext:(id)a4;
- (id)descriptionOfResolutionPathForEventDescriptor:(id)a0 senderDescriptor:(id)a1;
- (id)destinationsForKeyCommand:(id)a0 sender:(id)a1;

@end
