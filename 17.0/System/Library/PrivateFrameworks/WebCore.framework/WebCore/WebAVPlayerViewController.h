@class NSString;

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; struct VideoFullscreenInterfaceAVKit *m_objectOfCorrectType; } _fullscreenInterface;
    struct RetainPtr<AVPlayerViewController> { void *m_ptr; } _avPlayerViewController;
    struct RetainPtr<NSTimer> { void *m_ptr; } _startPictureInPictureTimer;
    struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> { id m_weakReference; } _delegate;
}

@property (readonly, nonatomic) const void *logIdentifier;
@property (readonly, nonatomic) const void *loggerPtr;
@property (readonly, nonatomic) struct { unsigned char x0; char *x1; unsigned char x2; char *x3; id x4; } *logChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)view;
- (void)startPictureInPicture;
- (id).cxx_construct;
- (void)flashPlaybackControlsWithDuration:(double)a0;
- (void)removeObserver;
- (void)removeFromParentViewController;
- (BOOL)pictureInPictureWasStartedWhenEnteringBackground;
- (BOOL)showsPlaybackControls;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)enterFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)stopPictureInPicture;
- (void).cxx_destruct;
- (BOOL)isPictureInPictureActive;
- (BOOL)isPictureInPicturePossible;
- (void)setDelegate:(id)a0;
- (void)setAllowsPictureInPicturePlayback:(BOOL)a0;
- (void)setShowsPlaybackControls:(BOOL)a0;
- (void)setPlayerController:(id)a0;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)exitFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)pictureInPictureActive;
- (BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)a0;
- (id)avPlayerViewController;
- (void)initObserver;
- (id)initWithFullscreenInterface:(void *)a0;
- (void)tryToStartPictureInPicture;

@end
