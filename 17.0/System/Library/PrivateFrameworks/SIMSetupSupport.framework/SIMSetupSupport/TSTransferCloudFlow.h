@class NSString, TSTransferCloudFlowModel, UIBarButtonItem;

@interface TSTransferCloudFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {
    UIBarButtonItem *_cancelButton;
    unsigned long long _proximitySetupState;
}

@property (retain) TSTransferCloudFlowModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (id)_createIntroViewController:(BOOL)a0;
- (void)_userDidTapCancel;
- (id)initWithProximitySetupState:(unsigned long long)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (void)startOverWithFirstViewController:(id /* block */)a0;

@end
