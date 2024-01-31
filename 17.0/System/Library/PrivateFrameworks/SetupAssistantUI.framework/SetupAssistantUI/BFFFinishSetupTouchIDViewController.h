@class UIBarButtonItem, NSString, LAContext, BKIdentity, BiometricKitUIEnrollViewController;

@interface BFFFinishSetupTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate> {
    BiometricKitUIEnrollViewController *_enrollController;
    BKIdentity *_identity;
    UIBarButtonItem *_cancelLeftNavigationItem;
    BOOL _enrollComplete;
}

@property (retain, nonatomic) LAContext *authContext;
@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)didBecomeActive:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didResignActive:(id)a0;
- (void)enrollResult:(int)a0 bkIdentity:(id)a1;
- (void)beginEnrollment;
- (id)_cancelLeftNavigationItem;
- (void)_didCompleteMesaControllerWithResult:(unsigned long long)a0;
- (void)_userDidTapCancelButton:(id)a0;
- (void)deleteIdentity;
- (void)endEnrollment;
- (void)resetLeftNavigationItem;
- (void)restartEnrollment;

@end
