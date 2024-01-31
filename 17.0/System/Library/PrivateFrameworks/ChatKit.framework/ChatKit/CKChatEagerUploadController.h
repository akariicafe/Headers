@class NSMutableDictionary, NSMutableArray;

@interface CKChatEagerUploadController : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierMap;
@property (retain, nonatomic) NSMutableArray *uploadUrls;
@property (retain, nonatomic) NSMutableDictionary *temporaryURLS;

- (id)init;
- (void).cxx_destruct;
- (id)_newTransferForURL:(id)a0 transcoderUserInfo:(id)a1 attributionInfo:(id)a2;
- (void)_uploadFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 videoComplementURL:(id)a3 attributionInfo:(id)a4 identifier:(id)a5 recipients:(id)a6;
- (void)addURLToIdentifierMap:(id)a0 forIdentifier:(id)a1;
- (void)asyncCopyFileAtURL:(id)a0 toDestinationURL:(id)a1 completion:(id /* block */)a2;
- (void)cancelAll;
- (void)cancelIdentifier:(id)a0;
- (void)cancelURL:(id)a0;
- (void)didSendComposition;
- (void)removeTemporaryURLForURL:(id)a0;
- (void)uploadFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 videoComplementURL:(id)a3 attributionInfo:(id)a4 identifier:(id)a5 recipients:(id)a6;
- (void)uploadPayload:(id)a0 identifier:(id)a1 replace:(BOOL)a2 recipients:(id)a3;

@end
