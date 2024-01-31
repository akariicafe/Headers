@class TFLaunchScreen, TFImageFetcher, NSURL;
@protocol TFBetaAppLaunchDataProvider, TFBetaAppLaunchPresenterView;

@interface TFBetaAppLaunchPresenter : NSObject

@property (readonly, nonatomic) id<TFBetaAppLaunchDataProvider> launchDataProvider;
@property (readonly, nonatomic) TFImageFetcher *imageFetcher;
@property (retain, nonatomic) TFLaunchScreen *launchScreen;
@property (weak, nonatomic) id<TFBetaAppLaunchPresenterView> presenterView;
@property (readonly, copy, nonatomic) NSURL *bundleURL;

- (void)update;
- (void).cxx_destruct;
- (void)_showHowToViewWithLaunchScreen:(id)a0;
- (void)showHowToScreen;
- (void)_abortLaunchScreenLoadWithError:(id)a0;
- (void)_showLoading;
- (void)_showTestNotesViewWithLaunchScreen:(id)a0;
- (void)exitLaunchScreen;
- (id)initWithBundleURL:(id)a0 launchDataProvider:(id)a1 launchScreenSidepack:(id)a2;
- (void)openHowToSupportLink;

@end
