@class NSString, NSOperationQueue;

@interface MPCReportingPlaybackObserver : NSObject <ICEnvironmentMonitorObserver> {
    NSOperationQueue *_recordEventOperationQueue;
    BOOL _offline;
}

@property (class, readonly, nonatomic) MPCReportingPlaybackObserver *sharedReportingPlaybackObserver;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void).cxx_destruct;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)a0 eventSource:(id)a1;
- (id)newPlayActivityEvent;
- (void)recordPlayActivityEvents:(id)a0 forEventSource:(id)a1;

@end
