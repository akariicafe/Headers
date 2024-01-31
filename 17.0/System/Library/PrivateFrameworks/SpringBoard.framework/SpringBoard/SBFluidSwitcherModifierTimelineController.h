@class UIWindowScene, UIWindow, SBFluidSwitcherModifierTimelineViewController;

@interface SBFluidSwitcherModifierTimelineController : NSObject {
    UIWindow *_window;
    SBFluidSwitcherModifierTimelineViewController *_rootViewController;
    UIWindowScene *_windowScene;
}

@property (nonatomic, getter=isVisible) BOOL visible;

+ (BOOL)_isNoisyEvent:(id)a0;

- (id)initWithWindowScene:(id)a0;
- (void)addEntry:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsEvent:(id)a0;

@end
