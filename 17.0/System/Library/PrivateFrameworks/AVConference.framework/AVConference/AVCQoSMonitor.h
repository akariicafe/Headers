@class AVConferenceXPCClient, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVCQoSMonitorDelegate;

@interface AVCQoSMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    id<AVCQoSMonitorDelegate> _delegate;
    AVConferenceXPCClient *_connection;
    NSMutableDictionary *_reportingIntervals;
}

@property (weak, nonatomic) id<AVCQoSMonitorDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *streamTokens;

- (void)dealloc;
- (void)deregisterBlocksForNotifications;
- (BOOL)generateInvalidStreamTokenWithError:(id *)a0;
- (id)initWithStreamToken:(long long)a0 queue:(id)a1 error:(id *)a2;
- (void)registerBlocksForNotifications;
- (id)registerStreamToken:(long long)a0;
- (long long)reportingIntervalForStreamToken:(long long)a0;
- (void)requestQoSReport;
- (void)terminateConnection;

@end
