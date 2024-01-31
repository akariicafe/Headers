@class AVConferenceXPCClient;
@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject {
    AVConferenceXPCClient *_connection;
    id _delegate;
    BOOL _isStarted;
}

@property (nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithMode:(long long)a0 error:(id *)a1;
- (void)terminateSession;
- (id)initWithMode:(long long)a0 error:(id *)a1 streamToken:(long long)a2;
- (void)deregisterBlocksForDelegateNotifications;
- (id)initWithStreamToken:(long long)a0 error:(id *)a1;
- (void)registerBlocksForDelegateNotifications;
- (id)sendCharacter:(unsigned short)a0;
- (BOOL)sendText:(id)a0;

@end
