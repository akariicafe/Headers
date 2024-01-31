@class UIColor;

@interface AVTVaryingColor : NSObject {
    UIColor *_baseColor;
    UIColor *_variationMinColor;
    UIColor *_variationMaxColor;
}

- (void).cxx_destruct;
- (id)colorByApplyingVariation:(float)a0;

@end
