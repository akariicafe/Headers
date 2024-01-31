@interface SMSRelayTranscodeController : NSObject

+ (id)sharedInstance;

- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 highQualityMaxByteSize:(unsigned long long)a3 lowQualityMaxByteSize:(unsigned long long)a4 representations:(long long)a5 completionBlock:(id /* block */)a6;

@end
