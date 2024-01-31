@class MMCSController;

@interface IMTransferAgentController : NSObject

@property (retain, nonatomic) MMCSController *controller;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isAllowlistedURL:(id)a0;
- (void)cancelSendTransferID:(id)a0;
- (void)warm;
- (id)_defaultMMCSAllowlist;
- (void)_receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 allowReauthorize:(BOOL)a6 fileSize:(unsigned long long)a7 sourceAppID:(id)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)_sendFilePath:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 retryAttemptCount:(unsigned long long)a4 userInfo:(id)a5 progressBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (BOOL)_shouldRetryUploadGivenMMCSError:(id)a0 retryAttemptCount:(unsigned long long)a1;
- (void)ensureSafeAttachment:(id)a0 topic:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 fileSize:(unsigned long long)a6 decryptionKey:(id)a7 sourceAppID:(id)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)sendFilePath:(id)a0 encrypt:(BOOL)a1 topic:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 userInfo:(id)a5 progressBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;

@end
