@class NSUUID, TUCall;
@protocol CNKLocalAudioTogglingDelegate, CNKAudioRoutingDelegate, CNKBannerPresentationDelegate;

@interface CNKBannerPresentationManager : NSObject {
    void /* unknown type, empty encoding */ value;
}

@property (nonatomic, weak) id<CNKBannerPresentationDelegate> presentationDelegate;
@property (nonatomic, weak) id<CNKAudioRoutingDelegate> audioRoutingDelegate;
@property (nonatomic, retain) TUCall *handedOffCall;
@property (nonatomic, readonly) BOOL inCallControlsVisible;
@property (nonatomic, readonly) BOOL isMicIndicatorVisible;
@property (nonatomic, readonly) BOOL onlyHasPlaceholderCall;
@property (nonatomic, readonly) BOOL conversationIsAVLess;
@property (nonatomic, retain) id<CNKLocalAudioTogglingDelegate> localAudioTogglingDelegate;
@property (nonatomic, readonly) NSUUID *placeholderCallGroupUUID;
@property (nonatomic, readonly) NSUUID *callUUID;
@property (nonatomic, readonly) BOOL shouldShowCallDetailsWhenReady;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic, readonly) BOOL wantsBannerWithoutScene;
@property (nonatomic, readonly) TUCall *activeCall;
@property (nonatomic, readonly) BOOL hasAssociatedCall;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)bannerDismissedBySpringBoard;
- (void)didUpdatePresentationModeToFullScreen;
- (void)dismissPresentedBannerForReason:(id)a0 animated:(BOOL)a1;
- (void)handleLockScreenStatusChanged;
- (void)invalidatePersistentSystemApertureAlertWithReason:(id)a0;
- (id)makeSystemApertureElementProvider;
- (void)preloadCallChanges;
- (void)presentHUDForCurrentContext;
- (void)presentReminderNotice;
- (void)presentSystemHUD;
- (void)refreshShareableContentWithBundleIdentifier:(id)a0;
- (void)showAccessoryButtonEventsNoticeIfNeeded;
- (void)showHandoffHUD;
- (void)showInCallHUD;
- (void)showLagunaPullConversationHUD;
- (void)showPTTHUD;
- (void)showRemoteParticipantNoticeIfNeeded;

@end
