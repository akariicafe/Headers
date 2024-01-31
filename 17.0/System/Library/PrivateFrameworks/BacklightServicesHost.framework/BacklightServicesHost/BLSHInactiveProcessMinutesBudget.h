@class NSArray, NSString, NSMutableArray;
@protocol BLSHOSInterfaceProviding, BSTimerScheduleQuerying, BSInvalidatable;

@interface BLSHInactiveProcessMinutesBudget : NSObject <BLSHInactiveProcessBudgeting> {
    NSString *_identifier;
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    NSMutableArray *_lock_buckets;
    id<BSTimerScheduleQuerying, BSInvalidatable> _lock_invalidationTimer;
    unsigned long long _lock_lastInvalidationTimestamp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long bucketCount;
@property (readonly, nonatomic) unsigned long long secondsBucketCount;
@property (readonly, copy, nonatomic) NSArray *buckets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)resetFutureSpecifiers;
- (long long)allowedFidelityAtDate:(id)a0 expectedFidelity:(long long)a1;
- (void)performInvalidation;
- (BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)a0;
- (id)validateAndChargeFutureSpecifier:(id)a0 nextSpecifier:(id)a1 expectedFidelity:(long long)a2;
- (void).cxx_destruct;
- (void)chargeRenderedSpecifier:(id)a0 expectedFidelity:(long long)a1;
- (id)initWithIdentifier:(id)a0 osInterfaceProvider:(id)a1;
- (void)invalidateAtRequestDate:(id)a0 expectedFidelity:(long long)a1 invalidationBlock:(id /* block */)a2;
- (BOOL)hasSecondsBudgetAtDate:(id)a0;

@end
