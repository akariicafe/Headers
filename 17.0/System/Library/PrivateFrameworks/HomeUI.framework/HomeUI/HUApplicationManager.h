@class NSHashTable;
@protocol HUStatusBarVisibilityHandling;

@interface HUApplicationManager : NSObject

@property (retain, nonatomic) NSHashTable *statusBarHidingRequesters;
@property (retain, nonatomic) NSHashTable *idleTimerDisabledRequesters;
@property (nonatomic) BOOL wasStatusBarVisible;
@property (retain, nonatomic) id<HUStatusBarVisibilityHandling> statusBarVisibilityHandler;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;

+ (id)sharedInstance;

- (id)init;
- (BOOL)isIdleTimerDisabled;
- (void).cxx_destruct;
- (void)setIdleTimerDisabled:(BOOL)a0 forRequester:(id)a1;
- (void)setStatusBarHidden:(BOOL)a0 forRequester:(id)a1;
- (void)setStatusBarHidden:(BOOL)a0 forRequester:(id)a1 withAnimationSettings:(id)a2;

@end
