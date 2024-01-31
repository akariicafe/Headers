@class PBFComplicationSnapshotRequest, NSString, CHSWidget, UIImage, NSError, NSHashTable, CHUISWidgetHostViewController;

@interface PBFComplicationSnapshotter : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_snapshotterIdentifier;
    double _lock_startTime;
    double _lock_endTime;
    BOOL _lock_finished;
    BOOL _lock_started;
    BOOL _lock_cleanedUp;
    BOOL _lock_invalidated;
    NSHashTable *_lock_observers;
    CHSWidget *_widgetWithIntent;
    CHUISWidgetHostViewController *_hostViewController;
}

@property (readonly, nonatomic) PBFComplicationSnapshotRequest *request;
@property (readonly, nonatomic) UIImage *snapshot;
@property (readonly, nonatomic) NSError *snapshotError;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (BOOL)start;
- (void)invalidate;
- (BOOL)_isFinished;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)_hasStarted;
- (BOOL)_wasInvalidated;
- (void)_finishWithImage:(id)a0 error:(id)a1;
- (void)_main_cleanup;
- (BOOL)_main_kickoffHostViewController:(id)a0;
- (void)_main_requestTimedOut;
- (BOOL)_wasCleanedUp;
- (void)cancelWithReason:(id)a0;
- (id)initWithComplicationSnapshotRequest:(id)a0;

@end
