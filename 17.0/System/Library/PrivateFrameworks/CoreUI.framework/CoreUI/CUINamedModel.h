@class MDLAsset;

@interface CUINamedModel : CUINamedLookup

@property (readonly, nonatomic) MDLAsset *asset;

- (id)description;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (id)_renditionForKey:(id)a0 inThemeRef:(unsigned long long)a1;

@end
