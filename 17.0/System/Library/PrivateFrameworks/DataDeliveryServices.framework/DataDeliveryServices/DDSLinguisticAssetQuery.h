@class DDSLinguisticAttributeFilter;

@interface DDSLinguisticAssetQuery : DDSAssetQuery

@property (readonly, nonatomic) DDSLinguisticAttributeFilter *filter;

- (id)initWithAssetType:(id)a0 languageIdentifier:(id)a1;
- (id)initWithLanguageIdentifier:(id)a0;
- (void)addRegionWithCountry:(id)a0 province:(id)a1 city:(id)a2;

@end
