@class NSArray, NSString, CUIThemeRendition;

@interface CUINamedSolidLayerStack : CUINamedLookup <CUINamedLayerStackProtocol> {
    CUIThemeRendition *_flattenedImageRendition;
}

@property (retain, nonatomic) NSArray *layers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *flattenedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2 resolvingWithBlock:(id /* block */)a3;
- (id)layerImageAtIndex:(unsigned long long)a0;

@end
