@class NSString, NSXPCConnection, NSDate, NSObject, DACDeviceRole;
@protocol DACRoleManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DACRoleManager : NSObject <DACRoleClientInterface> {
    BOOL _shouldAttemptReconnect;
    BOOL _connected;
    int _resetNotifyToken;
    id<DACRoleManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSDate *_lastLeaderAt;
    DACDeviceRole *_role;
    NSXPCConnection *_currentConnection;
    NSObject<OS_dispatch_source> *_fallbackTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 lastLeaderAt:(id)a1 queue:(id)a2;
- (void)requestSpeakerGroupLeaderRole;
- (void)roleChanged:(id)a0;

@end
