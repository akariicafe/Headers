@class PXSharedLibrarySharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsCountsManager, PXFeedGadget, PXLibraryFilterState, NSString, NSDate;

@interface PXSharedLibrarySharingSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *countsManager;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) BOOL wantsGadgets;
@property (retain, nonatomic) PXFeedGadget *feedGadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)initWithIdentifier:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (unsigned long long)gadgetType;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;
- (id)initWithLibraryFilterState:(id)a0;

@end
