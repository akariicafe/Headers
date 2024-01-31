@class NSString, ASTNetworking, ASTIdentity;
@protocol ASTConnectionManagerDelegate;

@interface ASTMaterializedConnectionManager : NSObject <ASTConnectionStatusDelegate, ASTConnectionManager>

@property (retain, nonatomic) ASTNetworking *networking;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ASTConnectionManagerDelegate> delegate;
@property (retain, nonatomic) ASTIdentity *identity;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelAllTestResults;
- (void)connection:(id)a0 connectionStateChanged:(long long)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesSent:(long long)a2 totalBytesExpected:(long long)a3;
- (void)downloadAsset:(id)a0 destinationFileHandle:(id)a1 allowsCellularAccess:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithSOCKSProxyServer:(id)a0 port:(id)a1;
- (BOOL)postAuthInfo:(id)a0 allowsCellularAccess:(BOOL)a1;
- (id)postEnrollAllowingCellularAccess:(BOOL)a0;
- (BOOL)postProfile:(id)a0 allowsCellularAccess:(BOOL)a1;
- (id)postRequest:(id)a0 allowsCellularAccess:(BOOL)a1;
- (void)postSealableFile:(id)a0 fileSequence:(id)a1 totalFiles:(id)a2 testId:(id)a3 dataId:(id)a4 allowsCellularAccess:(BOOL)a5 completion:(id /* block */)a6;
- (void)postSessionExistsForIdentities:(id)a0 ticket:(id)a1 timeout:(double)a2 allowsCellularAccess:(BOOL)a3 completion:(id /* block */)a4;
- (void)postTestResult:(id)a0 allowsCellularAccess:(BOOL)a1 completion:(id /* block */)a2;

@end
