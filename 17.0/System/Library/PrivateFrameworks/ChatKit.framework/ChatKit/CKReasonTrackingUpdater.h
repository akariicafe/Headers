@class NSCountedSet, NSString;
@protocol CKReasonTrackingUpdaterDelegate;

@interface CKReasonTrackingUpdater : NSObject

@property (retain, nonatomic) NSCountedSet *reasonsForNeedsUpdates;
@property (retain, nonatomic) NSCountedSet *reasonsForHoldingUpdates;
@property (nonatomic) BOOL hasPendingDeferredUpdate;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CKReasonTrackingUpdaterDelegate> delegate;
@property (readonly, nonatomic) BOOL isHoldingUpdates;

- (id)description;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (void)_handleReasonsForHoldingUpdatesChangeForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (void)_scheduleDeferredUpdateFollowingHoldForReason:(id)a0;
- (void)_triggerNeedsUpdateFollowingHoldForReason:(id)a0;
- (void)beginHoldingUpdatesForReason:(id)a0;
- (void)endAllHoldsOnUpdatesForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (void)endHoldingUpdatesForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (BOOL)isHoldingUpdatesForReason:(id)a0;
- (void)setNeedsDeferredUpdateWithReason:(id)a0;
- (void)updateImmediatelyIfNeeded;
- (void)updateImmediatelyWithReason:(id)a0;

@end
