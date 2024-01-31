@class NSHashTable, NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, BSMutableIntegerMap, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BSInvalidatable, BKSHIDEventDeliveryService;

@interface BKSHIDEventDeliveryManager : NSObject <BSDebugDescriptionProviding> {
    id<BKSHIDEventDeliveryService> _service;
    BOOL _forTesting;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_assertions;
    long long _lock_discreteDispatchingSeed;
    NSMutableDictionary *_lock_discreteDispatchingRules;
    long long _lock_keyCommandsDispatchingSeed;
    NSMutableDictionary *_lock_keyCommandsDispatchingRules;
    long long _lock_deferringSeed;
    NSMutableArray *_lock_deferringRules;
    long long _lock_bufferingSeed;
    NSMutableDictionary *_lock_bufferingPredicates;
    long long _lock_keyCommandsRegistrationSeed;
    NSMutableDictionary *_lock_keyCommandsRegistrations;
    NSObject<OS_dispatch_queue> *_implicitFlushQueue;
    struct __CFBoolean { } *_lock_needsFlush;
    long long _lock_preventFlushingSeed;
    BSMutableIntegerMap *_lock_preventFlushingReasons;
    id<BSInvalidatable> _lock_implicitPreventFlushingAssertion;
    NSDictionary *_lock_lastSentDiscreteDispatchingRules;
    NSDictionary *_lock_lastSentKeyCommandsDispatchingRules;
    NSArray *_lock_lastSentDeferringRules;
    NSSet *_lock_lastSentBufferingPredicates;
    NSDictionary *_lock_lastSentKeyCommandsRegistrations;
    NSSet *_lock_lastSentSetOfKeyCommandsRegistrations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_initWithService:(id)a0;
- (id)registerKeyCommands:(id)a0;
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)_initForTestingWithService:(id)a0;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_lock_flushIfNeeded;
- (void)_syncServiceFlushState;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)authenticateMessage:(id)a0;
- (void).cxx_destruct;
- (id)dispatchKeyCommandsForReason:(id)a0 withRule:(id)a1;
- (id)_lock_stateDescription;
- (id)transactionAssertionWithReason:(id)a0;
- (void)_lock_implicitFlush;
- (id)succinctDescription;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (id)_lock_transactionAssertionWithReason:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)bufferEventsMatchingPredicate:(id)a0 withReason:(id)a1;

@end
