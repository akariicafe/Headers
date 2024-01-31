@class NSArray, NSDictionary;

@interface CUINamedImageAtlas : CUINamedLookup {
    NSDictionary *_images;
    NSArray *_renditions;
    struct __CFArray { } *_atlasImages;
}

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) struct __CFArray { } *images;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) NSArray *imageNames;
@property (readonly, nonatomic) BOOL completeTextureExtrusion;

- (void)dealloc;
- (id)imageWithName:(id)a0;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 withContents:(id)a2 contentsFromCatalog:(id)a3 fromTheme:(unsigned long long)a4 withSourceThemeRef:(unsigned long long)a5;

@end
