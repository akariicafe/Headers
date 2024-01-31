@class UIStoryboard, NSBundle, BTShareAudioConnectingViewController, BTShareAudioSessionClient;

@interface BTShareAudioViewController : UINavigationController

@property (retain, nonatomic) BTShareAudioSessionClient *shareAudioSession;
@property (retain, nonatomic) NSBundle *mainBundle;
@property (retain, nonatomic) UIStoryboard *mainStoryboard;
@property (retain, nonatomic) BTShareAudioConnectingViewController *vcConnecting;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned int flags;

+ (id)instantiateViewController;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)reportError:(id)a0;
- (void)_sessionStart;
- (void)_showError:(id)a0;
- (void)_reportCompletion:(id)a0 mediaRouteID:(id)a1;
- (void)_showBringClose;
- (void)_sessionProgressEvent:(int)a0 info:(id)a1;
- (void)_showConfirm:(id)a0;
- (void)_showConnecting:(id)a0;
- (void)_showPairInstructions:(id)a0;
- (void)_transitionToViewController:(id)a0 animate:(BOOL)a1;
- (void)reportUserCancelled;
- (id)_imageForPID:(unsigned int)a0 colorCode:(unsigned int)a1;
- (id)_moviePathForPID:(unsigned int)a0 colorCode:(unsigned int)a1;

@end
