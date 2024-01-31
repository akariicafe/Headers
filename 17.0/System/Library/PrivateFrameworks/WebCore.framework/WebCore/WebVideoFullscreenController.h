@interface WebVideoFullscreenController : NSObject {
    struct RefPtr<VideoFullscreenControllerContext, WTF::RawPtrTraits<VideoFullscreenControllerContext>, WTF::DefaultRefDerefTraits<VideoFullscreenControllerContext>> { struct VideoFullscreenControllerContext *m_ptr; } _context;
    struct RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> { struct HTMLVideoElement *m_ptr; } _videoElement;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFinishFullscreen:(void *)a0;
- (void)enterFullscreen:(id)a0 mode:(unsigned int)a1;
- (void)exitFullscreen;
- (void)requestHideAndExitFullscreen;
- (void)setVideoElement:(struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement *x0; })a0;
- (struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement *x0; })videoElement;

@end
