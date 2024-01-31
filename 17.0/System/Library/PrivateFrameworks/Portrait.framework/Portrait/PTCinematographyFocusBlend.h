@class PTCinematographyDetection;

@interface PTCinematographyFocusBlend : NSObject

@property (readonly, nonatomic) PTCinematographyDetection *primaryFocusDetection;
@property (readonly, nonatomic) PTCinematographyDetection *secondaryFocusDetection;
@property (readonly, nonatomic) float primaryFocusCoefficient;
@property (readonly, nonatomic) float secondaryFocusCoefficient;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPrimaryDetection:(id)a0 secondaryDetection:(id)a1 primaryCoefficient:(float)a2;
- (id)_asCinematographyDictionary;
- (id)_asCoefficientsDictionary;
- (id)_initWithDetections:(id)a0 cinematographyDictionary:(id)a1;
- (id)_initWithDetections:(id)a0 coefficients:(id)a1;
- (id)_initWithDetections:(id)a0 coefficientsDictionary:(id)a1;
- (void)_setFocusBetweenDetection:(id)a0 detection:(id)a1 coefficient:(float)a2;
- (void)_setFocusOnDetection:(id)a0;
- (void)_setFocusOnPrimaryDetection:(id)a0 secondaryDetection:(id)a1 primaryCoefficient:(float)a2;
- (id)initFocusedBetweenDetection:(id)a0 detection:(id)a1 coefficient:(float)a2;
- (id)initFocusedOnDetection:(id)a0;

@end
