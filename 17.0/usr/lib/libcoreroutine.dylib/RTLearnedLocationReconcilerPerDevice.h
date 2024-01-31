@class RTPersistenceManager, NSObject;
@protocol OS_dispatch_queue;

@interface RTLearnedLocationReconcilerPerDevice : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistenceManager:(id)a0;
- (id)_sortDescriptorForReconciliation;
- (void)collapseReconciledVisitsToLocationsOfInterest:(id)a0 context:(id)a1 handler:(id /* block */)a2;
- (void)performReconciliationWithHandler:(id /* block */)a0;

@end
