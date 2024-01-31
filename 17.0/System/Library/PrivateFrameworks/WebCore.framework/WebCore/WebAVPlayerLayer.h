@class NSString, NSDictionary, CALayer, AVPlayerController;

@interface WebAVPlayerLayer : CALayer {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenModel> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; struct VideoFullscreenModel *m_objectOfCorrectType; } _fullscreenModel;
    struct RetainPtr<WebAVPlayerController> { void *m_ptr; } _playerController;
    struct RetainPtr<CALayer> { void *m_ptr; } _videoSublayer;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } _targetVideoFrame;
    struct CGSize { double width; double height; } _videoDimensions;
    struct RetainPtr<NSString> { void *m_ptr; } _videoGravity;
    struct RetainPtr<NSString> { void *m_ptr; } _previousVideoGravity;
    struct unique_ptr<WebCore::WebAVPlayerLayerFullscreenModelClient, std::default_delete<WebCore::WebAVPlayerLayerFullscreenModelClient>> { struct __compressed_pair<WebCore::WebAVPlayerLayerFullscreenModelClient *, std::default_delete<WebCore::WebAVPlayerLayerFullscreenModelClient>> { struct WebAVPlayerLayerFullscreenModelClient *__value_; } __ptr_; } _fullscreenModelClient;
    const void *_logIdentifier;
}

@property (readonly, nonatomic) const void *logIdentifier;
@property (readonly, nonatomic) const void *loggerPtr;
@property (readonly, nonatomic) struct { unsigned char x0; char *x1; unsigned char x2; char *x3; id x4; } *logChannel;
@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) void *fullscreenModel;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) CALayer *videoSublayer;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property struct CGSize { double x0; double x1; } videoDimensions;

+ (id)keyPathsForValuesAffectingVideoRect;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;
- (struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; })calculateTargetVideoFrame;
- (void)resolveBounds;

@end
