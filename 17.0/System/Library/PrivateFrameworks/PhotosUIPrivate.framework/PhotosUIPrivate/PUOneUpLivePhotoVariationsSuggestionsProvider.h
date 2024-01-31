@class NSString, NSMutableDictionary;

@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver>

@property (readonly, nonatomic) NSMutableDictionary *infos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (long long)_recommendedVariationTypeForAsset:(id)a0;
- (BOOL)canProvideSuggestionForAsset:(id)a0;

@end
