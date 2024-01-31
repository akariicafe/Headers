@class NSString, PKPassEntitlementsComposer, PKPassEntitlementSelectionSectionController, PKPassEntitlementTimeSectionController;

@interface PKPassShareEntitlementSelectionViewController : PKPaymentSetupOptionsViewController <PKPassEntitlementSelectionSectionControllerDelegate, PKPassEntitlementTimeSectionControllerDelegate, PKPassShareTimeLimitViewControllerDelegate> {
    unsigned long long _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    PKPassEntitlementSelectionSectionController *_entitlementSectionController;
    PKPassEntitlementTimeSectionController *_timeSectionController;
    BOOL _isShowingMyEntitlements;
}

@property (nonatomic) BOOL showDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithMyEntitlements:(id)a0;
- (void)_dismissButtonPressed;
- (id)_initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 maxEntitlementSelectionCount:(unsigned long long)a2 isShowingMyEntitlements:(BOOL)a3;
- (void)_reloadSections:(BOOL)a0;
- (void)didTapPassEntitlementTimeSectionController:(id)a0;
- (void)entitlementSelectionDidChange;
- (id)initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 maxEntitlementSelectionCount:(unsigned long long)a2;
- (void)showAdvancedScheduleSelectionFlowForEntitlementEntry:(id)a0;

@end
