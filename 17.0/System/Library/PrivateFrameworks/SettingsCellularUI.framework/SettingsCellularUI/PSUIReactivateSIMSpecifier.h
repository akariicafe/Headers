@class UIActivityIndicatorView, NSString, PSListController;

@interface PSUIReactivateSIMSpecifier : PSSpecifier <PSUIReActivateSIMSpecifierModelDelegate>

@property (weak) PSListController *hostController;
@property (retain) id planItem;
@property (retain) id originAccessoryView;
@property (retain) UIActivityIndicatorView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_activateSIMPressed:(id)a0;
- (id)initWithPlanUniversalReference:(id)a0 hostController:(id)a1;
- (void)transferBackCanceled:(id)a0;
- (void)transferBackFailed:(id)a0 error:(id)a1;
- (void)transferBackSuccessFrom:(id)a0 to:(id)a1;

@end
