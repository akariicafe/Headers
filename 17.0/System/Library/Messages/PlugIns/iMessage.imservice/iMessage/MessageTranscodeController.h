@interface MessageTranscodeController : NSObject

+ (id)sharedInstance;

- (void)transcribeAudioForAudioTransferURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)generateSnapshotForMessageGUID:(id)a0 payloadData:(id)a1 balloonBundleID:(id)a2 senderContext:(id)a3 completionBlock:(id /* block */)a4;
- (void)replaceTransferWithSafeTransfer:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 completionBlock:(id /* block */)a2;
- (void)transcodeFallbackFileTransferContents:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 sizes:(id)a3 commonCapabilities:(id)a4 representations:(long long)a5 isLQMEnabled:(BOOL)a6 completionBlock:(id /* block */)a7;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 isSticker:(BOOL)a2 transcoderUserInfo:(id)a3 sizes:(id)a4 commonCapabilities:(id)a5 representations:(long long)a6 isLQMEnabled:(BOOL)a7 completionBlock:(id /* block */)a8;
- (void)transcodePayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 completionBlock:(id /* block */)a3;

@end
