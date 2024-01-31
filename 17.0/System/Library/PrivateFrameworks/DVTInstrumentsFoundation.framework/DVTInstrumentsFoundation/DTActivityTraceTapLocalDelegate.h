@class NSObject, NSString, DTActivityTraceTapConfig, DTOSLogLoader, DTActivityTraceTapLocalShuttle, DTTapLocal, XRMobileAgentDock;
@protocol OS_dispatch_source, DVTDeviceGlobalStatusIndicator;

@interface DTActivityTraceTapLocalDelegate : NSObject <DTOSLogLoaderDelegate, DTTapLocalDelegate> {
    DTTapLocal *_tap;
    DTActivityTraceTapConfig *_config;
    DTOSLogLoader *_loaderStop;
    XRMobileAgentDock *_dock;
    DTActivityTraceTapLocalShuttle *_shuttle;
    NSObject<OS_dispatch_source> *_harLoggingTimer;
    int _harLoggingNotificationToken;
    id<DVTDeviceGlobalStatusIndicator> _recordingStatusIndicator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)setTap:(id)a0;
- (void)unpause;
- (id)validateConfig;
- (void)updateHARLogPrefsWithIsEnabled:(BOOL)a0;
- (void)_handleHARExternalNotificationChange;
- (void)_handleStopOfHARRecordingCausedByUser;
- (void)_setupHARDisabledByExternalClientNotifications;
- (void)_tearDownHARDisabledNotifications;
- (BOOL)canFetchWhileArchiving;
- (void)fetchDataForReason:(unsigned long long)a0 block:(id /* block */)a1;
- (void)initializeHARTimer;
- (void)logLoaderNeedsFetchNow:(id)a0;
- (id)noticeForRecordingMode:(unsigned long long)a0 isAllProcesses:(BOOL)a1 lossCount:(unsigned long long)a2;
- (void)tearDownHARTimer;

@end
