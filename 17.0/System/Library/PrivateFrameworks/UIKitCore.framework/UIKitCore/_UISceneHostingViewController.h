@class NSString, _UISceneHostingController;

@interface _UISceneHostingViewController : UIViewController <_UIEventDeferringRuleOwning> {
    _UISceneHostingController *_sceneHostingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_wantsContentOverlayInsetsUpdatesWhileDismissing;

- (void)viewWillAppear:(BOOL)a0;
- (long long)interfaceElementCategory;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_childViewControllerWillBePresentedFromViewControllerDelayingPresentationWithPresenter:(id)a0;

@end
