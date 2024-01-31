@class NSString, HFMediaAccessoryItem;
@protocol HUContainedMediaAccessoriesGridViewControllerDelegate_legacy, HUPresentationDelegate;

@interface HUContainedMediaAccessoriesGridViewController_legacy : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost> {
    BOOL _requiresPresentingViewControllerDismissal;
}

@property (nonatomic, getter=isPresentedModally) BOOL presentedModally;
@property (readonly, copy, nonatomic) HFMediaAccessoryItem *mediaAccessoryItem;
@property (weak, nonatomic) id<HUContainedMediaAccessoriesGridViewControllerDelegate_legacy> mediaAccessoryGridDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (id)initWithAccessoryContainerItem:(id)a0;
- (void)_edit:(id)a0;
- (void)_updateRightBarButtons;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initWithMediaAccessoryContainerItem:(id)a0 isPresentedModally:(BOOL)a1 valueSource:(id)a2;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;

@end
