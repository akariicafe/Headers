@interface RPBroadcastMP4ClipHandler : RPBroadcastHandler

- (void)beginRequestWithExtensionContext:(id)a0;
- (void)finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:(id)a0 error:(id)a1;
- (void)processMP4ClipWithURL:(id)a0 setupInfo:(id)a1 finished:(BOOL)a2;

@end
