@interface FamilyCircleUI.ChecklistTipDataLoader : NSObject <TipKitLegacy.TPKContentControllerDelegate> {
    void /* unknown type, empty encoding */ checklistTipContext;
    void /* unknown type, empty encoding */ tPKContentController;
    void /* unknown type, empty encoding */ _showTipCell;
    void /* unknown type, empty encoding */ checklistTipCell;
}

- (id)init;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)dismissButtonWasTapped;

@end
