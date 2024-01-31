@class OBBoldTrayButton, NSString, BiometricKitIdentity, UIBarButtonItem, BiometricKitUIEnrollViewController;
@protocol DSNavigationDelegate;

@interface DSTouchIDController : DSOBWelcomeController <BiometricKitUIEnrollResultDelegate, DSController> {
    BiometricKitIdentity *_identity;
    UIBarButtonItem *_cancelLeftNavigationItem;
    BOOL _enrollComplete;
}

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTouchIDEnrolled;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)enrollResult:(int)a0 bkIdentity:(id)a1;
- (void)beginEnrollment;
- (id)_cancelLeftNavigationItem;
- (void)_userDidTapCancelButton:(id)a0;
- (void)deleteIdentity;
- (void)restartEnrollment;
- (void)addNavigationItems;
- (void)deleteAllIdentities;
- (void)enrollTouchID;
- (BOOL)hasMultipleFingerprints;
- (void)resetTouchID;
- (void)shouldShowWithCompletion:(id /* block */)a0;
- (void)updateTouchIDPaneConfiguration;

@end
