@class NSString, NSMutableURLRequest, NSFileHandle;
@protocol ASTConnectionStatusDelegate;

@interface ASTConnectionAsset : ASTMaterializedConnection <ASTDownloadConnection>

@property (retain, nonatomic) NSString *assetName;
@property (copy, nonatomic) id /* block */ didDownloadFile;
@property (readonly, nonatomic) NSFileHandle *destinationFileHandle;
@property (copy, nonatomic) id /* block */ didReceiveResponse;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (weak, nonatomic) id<ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) unsigned long long rootOfTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)method;
- (void).cxx_destruct;
- (id)endpoint;
- (id)accept;
- (id)initWithAssetName:(id)a0 destinationFileHandle:(id)a1;

@end
