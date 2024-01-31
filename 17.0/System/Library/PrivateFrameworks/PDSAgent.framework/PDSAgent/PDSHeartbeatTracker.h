@class IMDispatchTimer, NSDate, NSObject, IDSServerBag;
@protocol OS_dispatch_queue, PDSHeartbeatTrackerDelegate;

@interface PDSHeartbeatTracker : NSObject

@property (retain, nonatomic) IMDispatchTimer *heartbeatTimer;
@property (retain, nonatomic) IDSServerBag *serverBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ kvStoreBlock;
@property (weak, nonatomic) id<PDSHeartbeatTrackerDelegate> delegate;
@property (nonatomic) BOOL scheduledActivity;
@property (readonly, nonatomic) NSDate *trackedHeartbeatDate;
@property (readonly, nonatomic) BOOL isPassedTrackedHeartbeatDate;

- (void)_setupMaintenanceActivity;
- (void).cxx_destruct;
- (void)_markNextCheckpointTimeWithTTL:(double)a0;
- (void)_handleHeartbeatFired;
- (id)initWithDelegate:(id)a0 queue:(id)a1 kvStoreBlock:(id /* block */)a2 serverBag:(id)a3;
- (void)noteShouldNotTrackHeartbeat;
- (void)noteShouldTrackHeartbeat;
- (void)noteUpdatedHeartbeatTTL:(double)a0;

@end
