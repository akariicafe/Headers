@class NSString, SBAppSwitcherSnapshotLockoutViewControllerProvider, NSMapTable, NSMutableDictionary, NSMutableArray, SBAppSwitcherSnapshotImageCache;
@protocol SBFluidSwitcherPageContentViewProviderDelegate;

@interface SBFluidSwitcherPageContentViewProvider : NSObject <SBAppSwitcherTransientOverlayPageContentViewDelegate> {
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    NSMapTable *_pageContentViewToTransientOverlayViewController;
    NSMutableArray *_transientOverlayPageContentViews;
    NSMutableDictionary *_switcherServiceViewControllerMap;
}

@property (weak, nonatomic) id<SBFluidSwitcherPageContentViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acquiredViewController:(id)a0 forTransientOverlayAppLayout:(id)a1;
- (void)relinquishTransientOverlayViewController:(id)a0;
- (long long)_interfaceOrientation;
- (void)purgePageContentViewForAppLayout:(id)a0;
- (id)init;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)a0;
- (void)_relinquishTransientOverlayViewController:(id)a0 forPageContentView:(id)a1;
- (void)_applyTransientOverlayViewController:(id)a0 toPageContentView:(id)a1;
- (id)_containerViewController;
- (struct CGSize { double x0; double x1; })_pageViewSizeForAppLayout:(id)a0;
- (id)_snapshotViewDelegate;
- (id)existingTransientOverlayViewControllerForAppLayout:(id)a0;
- (long long)_preferredContentInterfaceOrientationForViewController:(id)a0 preferredInterfaceOrientation:(long long)a1;
- (BOOL)isSuitableForRecycledItemContainer:(id)a0;
- (id)initWithDelegate:(id)a0 snapshotCache:(id)a1 lockoutViewProvider:(id)a2;
- (void).cxx_destruct;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)a0;
- (id)_snapshotViewForAppLayout:(id)a0 setActive:(BOOL)a1;
- (id)_viewForService:(id)a0 appLayout:(id)a1;
- (id)pageContentViewForAppLayout:(id)a0 setActive:(BOOL)a1;

@end
