@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSAddCellularPlanViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    BOOL _allowDismiss;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (id)initWithType:(unsigned long long)a0 allowDismiss:(BOOL)a1;

@end
