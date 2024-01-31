@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BiometricKitXPCClientConnection : NSObject {
    long long _deviceType;
    NSXPCConnection *_xpcConnection;
    BOOL _invalidated;
    NSMutableDictionary *_clients;
    int _serverStartedNotificationToken;
}

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)connectionWithDeviceType:(long long)a0;

- (BOOL)addClient:(id)a0;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)homeButtonPressed:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)removeClient:(id)a0;
- (id)client:(unsigned long long)a0;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (void)templateUpdate:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)taskResumeStatus:(int)a0 client:(unsigned long long)a1;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)touchIDButtonPressed:(BOOL)a0 client:(unsigned long long)a1;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (id)initWithDeviceType:(long long)a0;

@end
