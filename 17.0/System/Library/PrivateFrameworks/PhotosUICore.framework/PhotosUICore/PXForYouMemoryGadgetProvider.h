@class PXLibraryFilterState, NSString, NSDate;
@protocol PXMemoryForYouDataSourceManager;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>

@property (class, readonly, nonatomic) unsigned long long maxMemoriesToFetch;

@property (readonly, nonatomic) id<PXMemoryForYouDataSourceManager> dataSourceManager;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) BOOL wantsGadgets;
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
- (unsigned long long)gadgetType;
- (void)loadDataForGadgets;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;
- (id)initWithLibraryFilterState:(id)a0;

@end
