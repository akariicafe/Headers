@class NSString, NSMutableArray, UIBarButtonItem;

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {
    BOOL _showAddPlan;
    BOOL _forceDualSIMSetup;
    NSMutableArray *_danglingPlanItems;
    NSString *_iccid;
    UIBarButtonItem *_cancelButton;
}

@property (retain) NSMutableArray *currentItemsForIMessage;
@property BOOL inBuddy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)needsToRun:(id /* block */)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (BOOL)_needCustomizeBackAction:(id)a0;
- (id)initWithIccid:(id)a0 showAddPlan:(BOOL)a1 forceDualSIMSetup:(BOOL)a2 allowDismiss:(BOOL)a3;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;

@end
