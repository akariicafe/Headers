@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    double _pattern[6];
}

@property (readonly, nonatomic) long long patternType;
@property (readonly, nonatomic) double *pattern;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double phase;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isRoundDash;

+ (id)longDashPattern;
+ (id)dashPatternWithSpacing:(double)a0;
+ (id)emptyPattern;
+ (id)mediumDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)a0;
+ (id)shortDashPattern;
+ (id)solidPattern;
+ (id)strokePatternWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)p_patternString;
- (void)applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1;
- (void)applyToShapeRenderable:(id)a0;
- (void)i_applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1 capStyle:(unsigned long long *)a2;
- (id)initWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;
- (id)initWithPatternType:(long long)a0 pattern:(const double *)a1 count:(unsigned long long)a2 phase:(double)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (void)p_applyToShapeRenderable:(id)a0 lineWidth:(double)a1;
- (double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)a0 withinAvailableLength:(double)a1;
- (id)p_typeString;

@end
