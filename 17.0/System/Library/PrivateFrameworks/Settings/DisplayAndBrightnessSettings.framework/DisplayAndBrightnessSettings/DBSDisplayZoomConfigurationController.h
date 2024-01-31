@interface DBSDisplayZoomConfigurationController : NSObject

@property (class, readonly, nonatomic) DBSDisplayZoomConfigurationController *defaultController;

- (id)currentDisplayZoomMode;
- (id)displayZoomModes;
- (void)setDisplayZoomMode:(id)a0 withRelaunchURL:(id)a1;
- (void)setDisplayZoomMode:(id)a0 withRelaunchURL:(id)a1 transitionWithScreenshot:(BOOL)a2;

@end
