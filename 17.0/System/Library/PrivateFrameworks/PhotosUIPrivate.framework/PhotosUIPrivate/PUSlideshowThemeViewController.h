@class NSString, NSArray, OKProducerPreset, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowThemeDelegate;

@interface PUSlideshowThemeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver> {
    NSArray *_presets;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) BOOL _needsUpdateBackgroundView;
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView;
@property (retain, nonatomic) OKProducerPreset *currentPreset;
@property (weak, nonatomic) id<PUSlideshowThemeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_needsUpdate;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_didFinish;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_invalidateSpec;
- (void)_updateSpecIfNeeded;
- (void)_didPickPreset:(id)a0;
- (void)_invalidateBackgroundView;
- (void)_invalidateTableView;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateTableViewIfNeeded;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;

@end
