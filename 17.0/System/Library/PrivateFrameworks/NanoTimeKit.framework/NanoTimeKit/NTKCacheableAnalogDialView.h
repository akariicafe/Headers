@class NSArray, NSString, BSUIMappedImageCache, NSDictionary, UIView;

@interface NTKCacheableAnalogDialView : UIView {
    BSUIMappedImageCache *_cache;
    NSString *_cacheKey;
    NSArray *_moduloGroups;
    NSDictionary *_moduloToGroup;
    NSArray *_textLayers;
    UIView *_tickContainer;
    UIView *_textContainer;
}

@property (readonly) NSArray *tickGroups;
@property (readonly) double dialDiameter;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyTextColor:(id)a0;
- (id)_cacheIdentifierForTickCount:(unsigned long long)a0 modulus:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 rounded:(BOOL)a3;
- (void)addTextWithCount:(unsigned long long)a0 configurationBlock:(id /* block */)a1;
- (void)addTicksWithCount:(unsigned long long)a0 moduloGroups:(id)a1 sizes:(id)a2 roundedCorners:(id)a3;
- (void)applyTickColor:(id)a0 toGroupIndex:(unsigned long long)a1;
- (void)applyTickColor:(id)a0 toModulo:(unsigned long long)a1;
- (void)enumerateTextLayersWithBlock:(id /* block */)a0;
- (id)initWithDialDiameter:(double)a0 device:(id)a1;
- (id)initWithDialDiameter:(double)a0 device:(id)a1 cache:(id)a2 key:(id)a3;

@end
