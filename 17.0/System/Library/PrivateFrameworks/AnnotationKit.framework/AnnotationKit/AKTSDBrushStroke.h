@class NSString, UIColor;

@interface AKTSDBrushStroke : NSObject

@property (readonly, copy, nonatomic) NSString *strokeName;
@property (readonly, retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) int join;
@property (readonly, nonatomic) double miterLimit;

+ (id)cacheDirectory;
+ (Class)mutableClass;
+ (id)strokeWithName:(id)a0 color:(id)a1 width:(double)a2;
+ (void)loadBrush:(id)a0;
+ (void)loadLineEndsForBrush:(id)a0 inSVGDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1;
+ (void)loadSectionsForBrush:(id)a0 inSVGDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1;
+ (id)strokeWithType:(long long)a0 color:(id)a1 width:(double)a2;

- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)paintLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 atAngle:(double)a2 withScale:(double)a3 inContext:(struct CGContext { } *)a4;
- (void)paintLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 atAngle:(double)a2 withScale:(double)a3 inContext:(struct CGContext { } *)a4 useFastDrawing:(BOOL)a5;
- (id)strokeLineEnd:(id)a0;
- (id)brushBoundsForId:(id)a0;
- (void)brushPath:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)brushPath:(id)a0 withScaling:(struct { double x0; double x1; })a1 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 into:(id)a3 sectionIndex:(unsigned long long *)a4 viewScale:(double)a5;
- (id)brushPathsForId:(id)a0;
- (void)brushSection:(id)a0 sectionIndex:(unsigned long long)a1 ontoPath:(id)a2 withScaling:(struct { double x0; double x1; })a3 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 into:(id)a5 viewScale:(double)a6;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 join:(int)a3 miterLimit:(double)a4;

@end
