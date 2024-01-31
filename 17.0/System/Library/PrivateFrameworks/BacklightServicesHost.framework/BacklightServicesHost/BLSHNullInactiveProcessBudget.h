@class NSString;

@interface BLSHNullInactiveProcessBudget : NSObject <BLSHInactiveProcessBudgeting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetFutureSpecifiers;
- (long long)allowedFidelityAtDate:(id)a0 expectedFidelity:(long long)a1;
- (void)performInvalidation;
- (BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)a0;
- (id)validateAndChargeFutureSpecifier:(id)a0 nextSpecifier:(id)a1 expectedFidelity:(long long)a2;
- (void)chargeRenderedSpecifier:(id)a0 expectedFidelity:(long long)a1;
- (void)invalidateAtRequestDate:(id)a0 expectedFidelity:(long long)a1 invalidationBlock:(id /* block */)a2;

@end
