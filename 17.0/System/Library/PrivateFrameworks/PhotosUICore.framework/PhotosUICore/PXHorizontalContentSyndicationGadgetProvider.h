@class NSString, PXContentSyndicationDataSourceManager, PXLibraryFilterState, NSDate;

@interface PXHorizontalContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PXForYouRankable>

@property (readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) BOOL didGenerateGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)_updateGadgets;
- (void)loadDataForGadgets;
- (void)ppt_presentSeeAllViewController;
- (void)_configureDataSourceManager;
- (void)_configureDataSourceManagerIfNecessary;
- (void)_presentSeeAllViewControllerForGadget:(id)a0 animated:(BOOL)a1;
- (id)initWithLibraryFilterState:(id)a0;

@end
