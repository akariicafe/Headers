@interface IMFallbackTranscoder_AudioMessage : NSObject

- (void)_failWithOSStatusErrorCode:(int)a0 description:(id)a1 completion:(id /* block */)a2;
- (id)_tmpOutputFileURL;
- (void)transcodeOpusFile:(id)a0 completionBlock:(id /* block */)a1;

@end
