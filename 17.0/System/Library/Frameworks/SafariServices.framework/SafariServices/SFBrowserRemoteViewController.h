@class NSString, UIWindowScene;
@protocol SFBrowserRemoteViewControllerDelegate;

@interface SFBrowserRemoteViewController : _UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol> {
    BOOL _isInFullScreen;
    BOOL _hasBeenDisplayedAtLeastOnce;
    BOOL _shouldDetermineVisibilityOnNextLayout;
    BOOL _didLoadWebView;
}

@property (weak, nonatomic) id<SFBrowserRemoteViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (void)_determineVisibilityIfNeeded;
- (void)_sf_sceneDidEnterBackground:(id)a0;
- (void)_sf_sceneWillEnterForeground:(id)a0;
- (void)didAddToHomeScreen;
- (void)didChangeFullScreen:(BOOL)a0;
- (void)didDecideCookieSharingForURL:(id)a0 shouldCancel:(BOOL)a1;
- (void)didDecideShouldShowLinkPreviews:(BOOL)a0;
- (void)didFinishInitialLoad:(BOOL)a0;
- (void)didLoadWebView;
- (void)didResolveRedirectionWithURL:(id)a0 appLink:(id)a1;
- (void)executeCustomActivityProxyID:(id)a0;
- (void)fetchActivityViewControllerInfoForURL:(id)a0 title:(id)a1;
- (void)initialLoadDidRedirectToURL:(id)a0;
- (void)setRemoteSwipeGestureEnabled:(BOOL)a0;
- (void)willDismissServiceViewController;
- (void)willOpenCurrentPageInBrowser;
- (void)willOpenURLInHostApplication:(id)a0;

@end
