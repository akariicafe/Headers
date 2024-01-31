@class NSObject;
@protocol OS_xpc_object;

@interface IDSRemoteCredential : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
}

@property (nonatomic) BOOL wantsRetries;

- (void)_sendMessage:(id)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)_disconnect;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_connect;
- (void)_disconnected;
- (void)fetchRemoteAccountsOfServiceTypes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id /* block */)a0;
- (void)requestIDStatusForURIs:(id)a0 service:(id)a1 lightQuery:(BOOL)a2 allowQuery:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)sendAccountSyncMessage:(id)a0 messageID:(id)a1 queueOneIdentifier:(id)a2 allowCloudFallback:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id /* block */)a0;

@end
