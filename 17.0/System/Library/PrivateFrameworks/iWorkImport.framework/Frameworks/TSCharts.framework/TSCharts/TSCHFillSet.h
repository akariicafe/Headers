@class NSString, NSDictionary, TSUImage, NSMutableArray;

@interface TSCHFillSet : NSObject {
    NSDictionary *_PListProperties;
    TSUImage *_swatchImage;
    NSMutableArray *_seriesSwatchImages;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_seriesSwatchImageRects;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *plistPath;
@property (readonly, nonatomic) NSString *lookupString;

+ (double)defaultScaleFactor;
+ (struct CGSize { double x0; double x1; })defaultMacSwatchSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)plistProperties;
- (BOOL)chartAlreadyMatches:(id)a0;
- (id)colorFromProperties:(id)a0;
- (id)commandToApplyToChart:(id)a0 context:(id)a1;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)a0;
- (id)existingCachedImageForSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;
- (id)fillForPreviewForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1;
- (id)fillForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1 context:(id)a2;
- (id)fillFromSageProperties:(id)a0;
- (id)fillsForDefaultSeriesType;
- (id)fillsForSeriesType:(id)a0 context:(id)a1;
- (id)initWithIdentifier:(id)a0 plistPath:(id)a1;
- (void)p_createSeriesSwatchImagesWithSeriesCount:(unsigned long long)a0 swatchSize:(struct CGSize { double x0; double x1; })a1 scaleFactor:(double)a2;
- (id)p_propertyMapsToApplyToChart:(id)a0 context:(id)a1;
- (id)p_sagePropertiesForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1;
- (id)p_sagePropertiesForSeriesType:(id)a0;
- (id)p_tangierToSageProperties;
- (void)primeSwatchImageCache;
- (id)propertyMutationTuplesForPreviewOnChart:(id)a0;
- (id)seriesStylesForSeriesTypes:(id)a0 context:(id)a1;
- (id)seriesSwatchImageWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 seriesIndex:(unsigned long long)a2;
- (id)styleSwapCommandToApplyToChart:(id)a0 context:(id)a1;
- (id)swatchFillsWithSwatchSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;
- (id)swatchImageWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;

@end
