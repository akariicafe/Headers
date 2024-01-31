@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue, AXAssertionCoordinatorDelegate;

@interface AXAssertionCoordinator : NSObject

@property (weak, nonatomic) id<AXAssertionCoordinatorDelegate> delegate;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
@property (retain, nonatomic) NSHashTable *assertions;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)_stopTrackingPoorMansAssertion:(id)a0;
- (void)_startTrackingPoorMansAssertion:(id)a0;
- (id)acquireAssertionWithReason:(id)a0;

@end
