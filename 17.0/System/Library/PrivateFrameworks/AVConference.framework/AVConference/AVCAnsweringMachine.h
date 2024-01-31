@class AVConferenceXPCClient, AVCAnsweringMachineConfiguration, NSObject;
@protocol AVCAnsweringMachineDelegate, OS_dispatch_queue;

@interface AVCAnsweringMachine : NSObject {
    AVCAnsweringMachineConfiguration *_configuration;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_stateQueue;
    id<AVCAnsweringMachineDelegate> _delegate;
}

@property (readonly, nonatomic) id<AVCAnsweringMachineDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) long long messageAudioToken;

+ (void)cleanUpMessageRecordingURL:(id)a0 messageRecordingURLSandboxExtensionHandle:(long long)a1;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)description;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)logPrefix;
- (void)deregisterServerCallbacks;
- (void)printDidStop:(BOOL)a0 messageRecordingURL:(id)a1 error:(id)a2;
- (void)printInitConfiguration;
- (void)registerDidFinishAnnouncementBlockWithInstance:(id)a0;
- (void)registerDidStartBlockWithInstance:(id)a0;
- (void)registerDidStopBlockWithInstance:(id)a0;
- (void)registerServerCallbacks;
- (void)registerServerDidDisconnectBlockWithInstance:(id)a0;
- (BOOL)setUpDelegateQueue:(id)a0;
- (BOOL)setUpServerConnection;

@end
