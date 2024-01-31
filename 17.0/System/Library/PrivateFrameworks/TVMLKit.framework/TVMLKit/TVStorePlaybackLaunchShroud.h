@class UIWindow;

@interface TVStorePlaybackLaunchShroud : NSObject

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, getter=isHidden) BOOL hidden;

+ (id)sharedShroud;

- (id)init;
- (void).cxx_destruct;
- (void)fadeOut;
- (void)_hideWithFadeAnimation:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_showWithFadeAnimation:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

@end
