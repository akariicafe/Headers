@class NSArray, NSString, BKSHIDEventDeliveryManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding> {
    BKSHIDEventDeliveryManager *_deliveryManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_routers;
    BOOL _queue_needsFlush;
    id<BSInvalidatable> _queue_dispatchingRulesAssertion;
}

@property (retain, nonatomic) NSArray *eventRouters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)_initWithDeliveryManager:(id)a0;
- (void)_queue_flush;
- (void)_queue_routerDidChange:(id)a0;
- (id)_queue_succinctDescriptionBuilder;
- (id)_targetForDestination:(long long)a0;
- (id)eventRouters;
- (void)setEventRouters:(id)a0;

@end
