@interface FamilyCircleUI.AppleCardFamilySettingsViewModel : NSObject {
    void /* unknown type, empty encoding */ familyCircleStore;
    void /* unknown type, empty encoding */ appleCardStore;
    void /* unknown type, empty encoding */ appleCardUtilities;
    void /* unknown type, empty encoding */ _showShareAppleCardFlow;
    void /* unknown type, empty encoding */ _showAppleCardFamilyScreen;
    void /* unknown type, empty encoding */ _subLabel;
    void /* unknown type, empty encoding */ _sharingCardWithFamilyMembers;
    void /* unknown type, empty encoding */ _shouldHideShareCardButton;
    void /* unknown type, empty encoding */ cancellables;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)serviceAccountDidChange;

@end
