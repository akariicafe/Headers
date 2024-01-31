@class NSArray, NSMutableArray, NSCache;

@interface NTKMultiInterpolatedColorPalette : NSObject {
    NSCache *_cache;
    unsigned long long _arity;
    NSMutableArray *_freeAxes;
    NSMutableArray *_paletteIndices;
}

@property (retain, nonatomic) NSArray *transitionFractions;
@property (retain, nonatomic) NSArray *palettes;
@property (retain, nonatomic) NSMutableArray *colorInterpolators;
@property (retain, nonatomic) NSMutableArray *floatInterpolators;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (void)clearCache;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)valueForKey:(id)a0;
- (id)_combineValue:(id)a0 and:(id)a1 with:(double)a2 onAxis:(unsigned long long)a3;
- (id)initWithPalettes:(id)a0;
- (id)interpolatedColorFromSelector:(SEL)a0 parameter:(id)a1;

@end
