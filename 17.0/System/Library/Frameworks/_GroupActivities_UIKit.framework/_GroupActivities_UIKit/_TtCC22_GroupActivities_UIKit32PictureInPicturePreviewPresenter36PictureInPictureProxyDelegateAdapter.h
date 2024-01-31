@interface _TtCC22_GroupActivities_UIKit32PictureInPicturePreviewPresenter36PictureInPictureProxyDelegateAdapter : NSObject <PGPictureInPictureProxyDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)a0;
- (void).cxx_destruct;
- (void)pictureInPictureProxy:(id)a0 didStopPictureInPictureWithAnimationType:(long long)a1 reason:(long long)a2;
- (void)pictureInPictureProxy:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)pictureInPictureProxy:(id)a0 failedToStartPictureInPictureWithAnimationType:(long long)a1 error:(id)a2;
- (void)pictureInPictureProxy:(id)a0 willStartPictureInPictureWithAnimationType:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pictureInPictureProxyViewFrameForTransitionAnimation:(id)a0;
- (void)pictureInPictureProxy:(id)a0 didStartPictureInPictureWithAnimationType:(long long)a1;
- (long long)pictureInPictureProxyContentType:(id)a0;

@end
