@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing>

@property (retain, nonatomic) TSDPathSource *pathSource;

- (void)setGeometry:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (Class)layoutClass;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (Class)repClass;
- (id)initWithContext:(id)a0 geometry:(id)a1 pathSource:(id)a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;

@end
