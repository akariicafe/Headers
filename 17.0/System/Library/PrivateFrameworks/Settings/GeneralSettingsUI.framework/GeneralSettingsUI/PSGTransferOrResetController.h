@class PSGResetOrEraseListController, PSGTransferListController;

@interface PSGTransferOrResetController : PSViewController

@property (retain, nonatomic) PSGTransferListController *_transferListController;
@property (retain, nonatomic) PSGResetOrEraseListController *_resetOrEraseListController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;

@end
