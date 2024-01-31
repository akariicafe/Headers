@class AVConferenceXPCClient, NSDictionary, AVCMediaStreamConfig, NSObject;
@protocol OS_dispatch_queue;

@interface AVCTextStream : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCMediaStreamConfig *configuration;
@property (nonatomic) long long direction;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) id delegate;

- (void)pause;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)resume;
- (BOOL)configure:(id)a0 error:(id *)a1;
- (id)initWithNetworkSockets:(id)a0 callID:(id)a1 error:(id *)a2;
- (id)initWithRTPNWConnectionClientID:(id)a0 rtcpNWConnectionClientID:(id)a1 options:(id)a2 error:(id *)a3;
- (void)deregisterBlocksForDelegateNotifications;
- (BOOL)initializeServerWithNetworkSockets:(id)a0 callID:(id)a1 error:(id *)a2;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (void)refreshLoggingParameters;
- (void)registerBlocksForDelegateNotifications;
- (BOOL)setupTextStreamOutOfProcessWithClientArgs:(id)a0 error:(id *)a1;
- (id)validateInitializeConnectionResult:(id)a0;
- (BOOL)validateResultsDictionary:(id)a0 error:(id *)a1;

@end
