@class NSString, IDSService, NSMutableDictionary;

@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {
    IDSService *_idsService;
    NSMutableDictionary *_uniqueIDToTransferCompletionBlockMap;
    NSMutableDictionary *_uniqueIDToFilePathMap;
    int _numTransfers;
    int _totalTransfers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleUploadRequest:(id)a0;
- (void)_handleUploadResponse:(id)a0;
- (BOOL)_sendIDSMessage:(id)a0 topic:(id)a1 localPath:(id)a2;
- (void)_sendUploadRequest:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 allowReauthorize:(BOOL)a4;
- (void)_sendUploadResponse:(id)a0 topic:(id)a1 success:(BOOL)a2 error:(id)a3 ownerID:(id)a4 signature:(id)a5 requestURLString:(id)a6 transferID:(id)a7;
- (void)decrementTransferCount;
- (void)incrementTransferCount;
- (BOOL)isLocalDevicePresent;
- (id)localCompanionDevice;
- (void)remoteUploadFileRequest:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 completionBlock:(id /* block */)a4;

@end
