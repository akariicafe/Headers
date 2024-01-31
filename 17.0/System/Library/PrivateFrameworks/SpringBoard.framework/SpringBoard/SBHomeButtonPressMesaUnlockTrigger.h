@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _menuButtonDown;
    BOOL _primed;
}

- (id)succinctDescriptionBuilder;
- (void)screenOff;
- (id)description;
- (BOOL)bioUnlock;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)significantUserInteractionOccurred;

@end
