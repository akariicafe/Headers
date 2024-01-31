@class NSString, SFStartPageCollectionViewController, WBSStartPageSection;

@interface SFStartPageSingleSectionDataSource : NSObject <SFStartPageCollectionDataSource, SFStartPageDataSourceObserving> {
    SFStartPageCollectionViewController *_collectionViewController;
    WBSStartPageSection *_section;
    id /* block */ _reloadHandler;
    id /* block */ _navigationItemHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadNavigationItemAnimated:(BOOL)a0;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (long long)customizationControlPolicyForStartPageCollectionViewController:(id)a0;
- (id)sectionsForStartPageCollectionViewController:(id)a0;
- (void)startPageCollectionViewController:(id)a0 toggleSectionExpanded:(id)a1;
- (void).cxx_destruct;
- (void)startPageCollectionViewControllerWillUpdateNavigationBar:(id)a0;
- (BOOL)startPageCollectionViewController:(id)a0 isSectionExpanded:(id)a1;
- (void)_reloadSection;
- (void)connectToViewController:(id)a0;
- (id)initWithReloadHandler:(id /* block */)a0 navigationItemHandler:(id /* block */)a1;
- (void)startPageCollectionViewController:(id)a0 editSection:(id)a1;

@end
