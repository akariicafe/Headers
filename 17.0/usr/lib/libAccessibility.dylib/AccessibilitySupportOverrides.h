@class NSNumber;

@interface AccessibilitySupportOverrides : NSObject

@property (retain, nonatomic) NSNumber *boldText;
@property (retain, nonatomic) NSNumber *increaseContrast;
@property (retain, nonatomic) NSNumber *reduceTransparency;
@property (retain, nonatomic) NSNumber *reduceMotion;
@property (retain, nonatomic) NSNumber *onOffLabels;
@property (retain, nonatomic) NSNumber *buttonShapes;
@property (retain, nonatomic) NSNumber *grayscale;
@property (retain, nonatomic) NSNumber *smartInvert;
@property (retain, nonatomic) NSNumber *differentiateWithoutColor;

+ (id)shared;

- (void)_removeFilterWithName:(id)a0;
- (void)_installGrayscaleFilter;
- (void)_installInvertColorsFilter;
- (void).cxx_destruct;
- (void)_addFilter:(id)a0;

@end
