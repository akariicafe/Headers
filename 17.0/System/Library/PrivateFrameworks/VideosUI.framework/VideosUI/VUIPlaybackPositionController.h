@class SBCPlaybackPositionSyncService, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface VUIPlaybackPositionController : NSObject {
    NSObject<OS_os_log> *_logObject;
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionSyncService *_syncService;
}

@property (nonatomic, getter=isRunning) BOOL running;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_onQueue_beginCapturingEvents;
- (void)_onQueue_endCapturingEvents;
- (void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)a0 forTrack:(id)a1;
- (void)beginCapturingEvents;
- (void)endCapturingEvents;
- (void)persistPlaybackPositionInfo:(id)a0 forTrack:(id)a1;

@end
