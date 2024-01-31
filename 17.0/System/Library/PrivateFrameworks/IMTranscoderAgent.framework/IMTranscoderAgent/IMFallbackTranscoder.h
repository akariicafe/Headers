@class IMFallbackTranscoder_AudioMessage;

@interface IMFallbackTranscoder : NSObject

@property (retain, nonatomic) IMFallbackTranscoder_AudioMessage *audioTranscoder;

- (void)dealloc;
- (id)_findPluginFallbackEncoder:(id)a0 withBalloonBundleID:(id)a1;
- (void)_transcodeAudioMessageContents:(id)a0 utiType:(id)a1 completionBlock:(id /* block */)a2;
- (void)_transcodeAutoloopContents:(id)a0 utiType:(id)a1 completionBlock:(id /* block */)a2;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 completionBlock:(id /* block */)a3;
- (void)transcodeFileTransferData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 inFileURL:(id)a3 fallBack:(BOOL)a4 completionBlock:(id /* block */)a5;

@end
