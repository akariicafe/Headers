@class NSString, SUUIQuicklinksPageComponent, SUUIQuicklinksViewController;

@interface SUUIQuicklinksPageSection : SUUIStorePageSection <SUUIQuicklinksViewControllerDelegate> {
    SUUIQuicklinksViewController *_quicklinksViewController;
}

@property (readonly, nonatomic) SUUIQuicklinksPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (id)_quicklinksViewController;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)quicklinksViewController:(id)a0 didSelectLink:(id)a1 atIndex:(long long)a2;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
