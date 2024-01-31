@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, CSAttendingServiceDelegate;

@interface CSAttendingServiceClient : NSObject <CSAttendingServiceDelegate, CSAttendingService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSXPCConnection *attendingConnection;
@property (retain, nonatomic) id remoteObjectProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSAttendingServiceDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_createClientConnection;
- (void)stopAttendingWithReason:(long long)a0;
- (BOOL)_isAttendingAllowedForUseCase:(long long)a0;
- (void)_setupRemoteServiceProxyObject;
- (void)attendingStoppedWithReason:(long long)a0;
- (void)speechPauseDetected;
- (void)speechStartDetectedWithEventInfo:(id)a0;
- (void)startAttendingWithOptions:(id)a0 completion:(id /* block */)a1;

@end
