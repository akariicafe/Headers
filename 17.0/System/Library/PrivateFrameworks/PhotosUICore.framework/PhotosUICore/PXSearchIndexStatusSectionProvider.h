@class NSString, NSArray;
@protocol PXSearchDataSourceSectionProviderChangeObserver;

@interface PXSearchIndexStatusSectionProvider : NSObject <PXSettingsKeyObserver, PXSearchDataSourceSectionProvider>

@property (readonly, nonatomic) BOOL showsIndexingFooter;
@property (nonatomic) BOOL isIndexingPaused;
@property (nonatomic) unsigned long long itemsRemainingCount;
@property (nonatomic) BOOL isAllowedToBeVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) long long identifier;

- (id)init;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)cellReuseIdentifierForItemIdentifier:(id)a0;
- (void)configureCell:(id)a0 forItemIdentifier:(id)a1;
- (void)configureSupplementaryView:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)layoutForSectionIdentifier:(id)a0 environment:(id)a1 collectionViewLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)a0;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)a0;
- (void)searchIndexStatusDidChange:(id)a0;
- (id)supplementaryViewReuseIdentifierForKind:(id)a0 indexPath:(id)a1;

@end
