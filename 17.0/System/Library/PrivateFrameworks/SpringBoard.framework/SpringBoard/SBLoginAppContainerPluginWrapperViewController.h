@class SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView, SBLockScreenPlugin, SBLockScreenPluginOverlayViewController;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {
    SBLockScreenPluginOverlayViewController *_overlayController;
    SBLoginAppContainerOverlayWrapperView *_overlayWrapperView;
    SBLoginAppContainerPluginWrapperView *_containerView;
}

@property (readonly, retain, nonatomic) SBLockScreenPlugin *plugin;

- (id)initWithPlugin:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)handleVolumeDownButtonPress;

@end
