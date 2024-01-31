@class UIButton, UIView;
@protocol CSDeviceBlockViewDelegate;

@interface CSDeviceBlockView : CSModalView {
    UIButton *_unblockDeviceButton;
    UIButton *_emergencyButton;
}

@property (retain, nonatomic) UIView *unblockDeviceView;
@property (retain, nonatomic) UIView *authenticationView;
@property (readonly, nonatomic) double buttonsBottomSpacing;
@property (readonly, nonatomic) BOOL isShowingAuthenticationView;
@property (readonly, nonatomic) BOOL isShowingUnblockDeviceView;
@property (weak, nonatomic) id<CSDeviceBlockViewDelegate> deviceBlockDelegate;

- (void).cxx_destruct;
- (void)_activateConstraints;
- (double)_buttonsBottomSpacing;
- (void)_handleEmergencyButtonAction;
- (void)_handleUnblockButtonAction;
- (void)_updateViewForUnblockDeviceViewAnimated:(BOOL)a0;
- (void)addDeviceUnblockButtons;
- (void)removeDeviceUnblockButtons;
- (void)updateViewForUnblockDeviceView;

@end
