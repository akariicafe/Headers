@interface VCVideoDecoder : NSObject {
    long long _streamToken;
    struct tagHANDLE { int x0; } *_videoPlayerHandle;
    int _clientCount;
}

@property (readonly) struct tagHANDLE { int x0; } *videoPlayerHandle;

+ (id)decoderForStreamToken:(long long)a0 withConfig:(struct tagVideoDecoderConfig { int x0; int x1; struct opaqueRTCReporting *x2; BOOL x3; BOOL x4; void /* function */ *x5; void *x6; } *)a1;
+ (void)releaseVideoDecoderForStreamToken:(long long)a0;
+ (id)streamTokenDecoderMap;

- (id)initWithConfig:(struct tagVideoDecoderConfig { int x0; int x1; struct opaqueRTCReporting *x2; BOOL x3; BOOL x4; void /* function */ *x5; void *x6; } *)a0;
- (void)dealloc;

@end
