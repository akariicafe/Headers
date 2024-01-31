@class NSUUID;
@protocol UIKeyInput;

@interface UIKBLocalAuthenticationObserver : NSObject {
    BOOL _isListeningForLAUINotifications;
}

@property BOOL localAuthenticationPresented;
@property (weak, nonatomic) id<UIKeyInput> delegateResignedDuringLocalAuthentication;
@property (retain, nonatomic) NSUUID *uuidOfDelegateResignedDuringLocalAuthentication;
@property (retain, nonatomic) NSUUID *uuidOfSessionEndedDuringLocalAuthentication;
@property (nonatomic) BOOL isRestoringPreLocalAuthenticationDelegate;
@property (nonatomic) BOOL inputUIResuming;
@property (nonatomic) BOOL isRestoringInputViews;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationResumed:(id)a0;
- (BOOL)_applicationStateIsActive;
- (void)_localAuthenticationDismissed;
- (void)_localAuthenticationPresented;
- (void)_startListeningForLAUINotificationsIfNeeded;
- (void)_stopListeningForLAUINotifications;
- (void)didTryToBecomeFirstResponder:(id)a0;
- (void)inputDelegateWillTeardown:(id)a0 sessionUUID:(id)a1;
- (BOOL)localAuthenticationPresentedOrBeingRecoveredFrom;
- (id)sessionIDForInputDelegate:(id)a0;
- (void)willTryToBecomeFirstResponder:(id)a0;

@end
