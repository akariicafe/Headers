@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IMTranscodeController : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_connect;
- (void)_disconnected;
- (void)generateMetadata:(id)a0 metadataURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 completionBlock:(id /* block */)a4 blockUntilReply:(BOOL)a5;
- (void)generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 completionBlock:(id /* block */)a4 blockUntilReply:(BOOL)a5;
- (void)generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 balloonBundleID:(id)a4 completionBlock:(id /* block */)a5 blockUntilReply:(BOOL)a6;
- (void)transcodeLocalTransferPayloadData:(id)a0 balloonBundleID:(id)a1 completionBlock:(id /* block */)a2;
- (void)_decodeiMessageAppPayload:(id)a0 senderContext:(id)a1 bundleID:(id)a2 retries:(unsigned long long)a3 completionBlock:(id /* block */)a4 blockUntilReply:(BOOL)a5;
- (void)_generateMetadata:(id)a0 metadataURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 retries:(unsigned long long)a4 completionBlock:(id /* block */)a5 blockUntilReply:(BOOL)a6;
- (void)_generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 retries:(unsigned long long)a4 balloonBundleID:(id)a5 completionBlock:(id /* block */)a6 blockUntilReply:(BOOL)a7;
- (void)_generateSafeRender:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 retries:(int)a2 completionBlock:(id /* block */)a3;
- (void)_insertSandboxExtensionIntoXPCMessage:(id)a0 withKey:(id)a1 forFileURL:(id)a2 readOnly:(BOOL)a3;
- (void)_transcodeFileTransferContents:(id)a0 utiType:(id)a1 isSticker:(BOOL)a2 allowUnfilteredUTIs:(id)a3 target:(long long)a4 sizes:(id)a5 commonCapabilities:(id)a6 maxDimension:(unsigned long long)a7 transcoderUserInfo:(id)a8 representations:(long long)a9 fallBack:(BOOL)a10 retries:(int)a11 isLQMEnabled:(BOOL)a12 completionBlock:(id /* block */)a13;
- (void)_transcodeFileTransferPayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 retries:(unsigned long long)a3 fallBack:(BOOL)a4 completionBlock:(id /* block */)a5;
- (void)decodeiMessageAppPayload:(id)a0 senderContext:(id)a1 bundleID:(id)a2 completionBlock:(id /* block */)a3 blockUntilReply:(BOOL)a4;
- (void)generateMetadata:(id)a0 metadataURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 completionBlock:(id /* block */)a4;
- (void)generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 completionBlock:(id /* block */)a4;
- (void)generateSafeRender:(id)a0 completionBlock:(id /* block */)a1;
- (void)generateSafeRender:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 completionBlock:(id /* block */)a2;
- (void)generateSnapshotForMessageGUID:(id)a0 payloadURL:(id)a1 balloonBundleID:(id)a2 senderContext:(id)a3 completionBlock:(id /* block */)a4;
- (void)transcodeFallbackFileTransferContents:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 isLQMEnabled:(BOOL)a9 completionBlock:(id /* block */)a10;
- (void)transcodeFallbackFileTransferPayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 completionBlock:(id /* block */)a3;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 isSticker:(BOOL)a2 allowUnfilteredUTIs:(id)a3 target:(long long)a4 sizes:(id)a5 commonCapabilities:(id)a6 maxDimension:(unsigned long long)a7 transcoderUserInfo:(id)a8 representations:(long long)a9 isLQMEnabled:(BOOL)a10 completionBlock:(id /* block */)a11;
- (void)transcribeAudioForAudioTransferURL:(id)a0 withCompletion:(id /* block */)a1;

@end
