@class NSString, SBAlertItemPresenterWindowSceneResolver;

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter>

@property (retain, nonatomic) SBAlertItemPresenterWindowSceneResolver *windowSceneResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (void)windowSceneDidConnect:(id)a0 withSharedModalAlertItemPresenter:(id)a1;
- (void)windowSceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (BOOL)presentsAlertItemsModally;
- (id)initWithSharedModalAlertItemPresenter:(id)a0 windowSceneManager:(id)a1;

@end
