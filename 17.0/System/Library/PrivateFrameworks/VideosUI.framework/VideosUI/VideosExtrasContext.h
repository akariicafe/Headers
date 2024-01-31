@class NSString, NSURL, MPPlaybackContext, NSArray, VideosExtrasRootViewController, NSObject, UIViewController, MPMediaItem;
@protocol VideosExtrasContextDelegate, TVPMediaItem;

@interface VideosExtrasContext : NSObject <VideosExtrasRootViewControllerDelegate, VideosExtrasPlaybackDelegate>

@property (nonatomic) BOOL isStarted;
@property (weak, nonatomic) id<VideosExtrasContextDelegate> delegate;
@property (retain, nonatomic) UIViewController *featurePlaybackViewController;
@property (retain, nonatomic) MPPlaybackContext *featurePlaybackContext;
@property (readonly, nonatomic) VideosExtrasRootViewController *extrasRootViewController;
@property (readonly, nonatomic) MPMediaItem *mediaItem;
@property (readonly, nonatomic) NSObject<TVPMediaItem> *tvpMediaItem;
@property (readonly, copy, nonatomic) NSURL *javascriptURL;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) long long storeID;
@property (nonatomic) BOOL showsBuiltInNavigationControls;
@property (nonatomic) BOOL showsMenuBar;
@property (readonly, nonatomic) NSArray *mainMenuItemElements;
@property (nonatomic) unsigned long long selectedMainMenuIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)extrasRootViewControllerClass;
+ (id)overriddenJavascriptURL;
+ (void)overrideJavascriptURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (id)initWithMediaItem:(id)a0;
- (void)extrasMenuItemSelected:(id)a0 atIndex:(unsigned long long)a1;
- (void)extrasRequestReloadWithContext:(id)a0;
- (void)_configureForMediaItem:(id)a0;
- (void)clearNavStack;
- (void)extrasBackButtonPressed;
- (void)extrasDoneButtonPressed;
- (void)extrasRequestsMediaPlayback:(id)a0 isBackground:(BOOL)a1;
- (void)extrasRequestsPlaybackStop;
- (void)extrasRootViewController:(id)a0 extrasVisibilityNeedsUpdate:(BOOL)a1;
- (void)extrasRootViewControllerDidLoadMainMenuItems:(id)a0;
- (id)initWithApplicationJavascriptURL:(id)a0 storeID:(long long)a1 buyParameters:(id)a2;
- (id)initWithTVPMediaItem:(id)a0;
- (BOOL)isMenuItemElementMainFeature:(id)a0;
- (void)setClearsStackOnNextPush;
- (BOOL)shouldExtrasBeVisibleForSize:(struct CGSize { double x0; double x1; })a0;
- (void)startIfNecessary;

@end
