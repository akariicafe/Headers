@class NSObject;
@protocol OS_xpc_object, SSRVoiceProfileXPCClientDelegate;

@interface SSRVoiceProfileXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (weak, nonatomic) id<SSRVoiceProfileXPCClientDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)connect;
- (void)_handleListenerEvent:(id)a0;
- (void).cxx_destruct;
- (void)_handleListenerDisconnectedError:(id)a0;
- (void)_handleListenerError:(id)a0;
- (void)fetchEnrollmentStatusForSiriProfileId:(id)a0 forLanguageCode:(id)a1 completion:(id /* block */)a2;

@end
