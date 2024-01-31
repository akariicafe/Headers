@class NSString, PXAssetReference, PXSuggestionsDataSource, PXAssetsDataSourceManager, NSMapTable, PXSuggestionsDataSourceManager;

@interface PXForYouSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver> {
    BOOL _hasGeneratedGadgets;
    NSMapTable *_keyAssetFetchesBySuggestion;
}

@property (retain, nonatomic) PXAssetReference *oneUpInitialAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (readonly, nonatomic) PXSuggestionsDataSource *dataSource;
@property (readonly, nonatomic) PXSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)loadDataForGadgets;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (id)_gadgetForAssetReference:(id)a0;
- (void)configureGadget:(id)a0;
- (id)initWithDataSourceManager:(id)a0 localizedTitle:(id)a1;
- (id)keyAssetForSuggestion:(id)a0;
- (void)presentOneUpForSuggestion:(id)a0 withMediaProvider:(id)a1 animated:(BOOL)a2;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)a0 withMediaProvider:(id)a1 animated:(BOOL)a2;

@end
