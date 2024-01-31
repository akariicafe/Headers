@class NSString, NSSet;

@interface ConversationKit.BannerPresentationManager : NSObject <ConversationKit.SystemBannerHostViewControllerDelegate, TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ presentationDelegate;
    void /* unknown type, empty encoding */ audioRoutingDelegate;
    void /* unknown type, empty encoding */ inCallConversationControlsDelegate;
    void /* unknown type, empty encoding */ _conversationControlsManager;
    void /* unknown type, empty encoding */ handedOffCall;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ presentedSystemApertureElement;
    void /* unknown type, empty encoding */ updateWorkItem;
    void /* unknown type, empty encoding */ presentedBannerDismissalTimer;
    void /* unknown type, empty encoding */ systemApertureElementDismissalTimer;
    void /* unknown type, empty encoding */ placeholderCallCenter;
    void /* unknown type, empty encoding */ shouldRequestHUDPresentationOnAVUpgradeOrDowngrade;
    void /* unknown type, empty encoding */ previouslyHadMultipleCalls;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ features;
}

@property (nonatomic, readonly) NSString *inCallSceneSessionIdentifier;
@property (nonatomic, readonly) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic, readonly) BOOL hasPresentedFullScreenCallUI;
@property (nonatomic, readonly) BOOL isPresentingFullScreenCallUI;
@property (nonatomic, readonly) BOOL isSpringBoardLocked;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentedBanner;
@property (nonatomic, readonly) BOOL inCallControlsVisible;

- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1 fromOldConversation:(id)a2;
- (void)deepLinkToFullScreenCallDetailsView;
- (void)deepLinkToFullScreenCallUI;
- (void)didDismiss:(id)a0 reason:(long long)a1;
- (void)didUpdatePresentationModeToFullScreen;
- (void)dismissPresentedBannerForReason:(id)a0 animated:(BOOL)a1;
- (void)handleAppLaunchWantsHUDDismissal:(id)a0;
- (void)handleCallStatusDidChange:(id)a0;
- (void)invalidatePersistentSystemApertureAlertWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
