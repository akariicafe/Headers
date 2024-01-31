@interface GameCenterUI.LocalPlayerAuthenticationPresenter : NSObject <GKLocalPlayerAuthenticationUIPersonality> {
    void /* unknown type, empty encoding */ localPlayer;
    void /* unknown type, empty encoding */ isUpdating;
    void /* unknown type, empty encoding */ onUpdatePhaseChange;
    void /* unknown type, empty encoding */ onAuthenticatedPlayerDidChange;
    void /* unknown type, empty encoding */ onUIRequired;
}

- (id)init;
- (void).cxx_destruct;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)authenticationShowSignInUIForLocalPlayer:(id)a0 dismiss:(id /* block */)a1;

@end
