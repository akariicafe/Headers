@class NSArray, NSString, BLSHBacklightEnvironmentPresentation, BLSHPresentationDateSpecifier, NSMutableSet, NSMutableArray;
@protocol BSTimerScheduleQuerying, BSCancellable, BLSHEngineRenderFlipbookSessionDelegate, BSInvalidatable, BLSHFlipbook, BLSHOSInterfaceProviding;

@interface BLSHEngineRenderFlipbookSession : NSObject <BSInvalidatable> {
    id<BLSHFlipbook> _flipbook;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BLSHPresentationDateSpecifier *_lock_preparingSpecifier;
    NSMutableSet *_lock_pendingEnvironments;
    NSMutableArray *_lock_renderedFrames;
    id<BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> _lock_timeoutTimer;
    id<BLSHEngineRenderFlipbookSessionDelegate> _lock_delegate;
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    unsigned long long _stateHandler;
    double _sessionStartTime;
    double _lock_layoutStartTime;
    double _lock_accumulatedLayoutDuration;
    double _lock_accumulatedRenderDuration;
    int _lock_retryRenderCount;
    BOOL _lock_didFailToRender;
    BOOL _lock_timedOut;
    BOOL _lock_invalidated;
    BOOL _lock_didDisableFlipbookPowerSavings;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly, nonatomic) NSArray *renderedFrames;
@property (readonly, nonatomic) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)prepareAndRenderFrameSpecifier:(id)a0;
- (id)initWithDelegate:(id)a0 flipbook:(id)a1 presentation:(id)a2 osInterfaceProvider:(id)a3;
- (id)telemetryDataWithEndTime:(double)a0 reasonEnded:(id)a1 preventedSleepDuration:(double)a2;

@end
