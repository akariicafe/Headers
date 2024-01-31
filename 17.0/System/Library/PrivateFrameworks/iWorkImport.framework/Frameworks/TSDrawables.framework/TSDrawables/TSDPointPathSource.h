@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    struct CGSize { double width; double height; } mNaturalSize;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } minPointValue;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } maxPointValue;
@property (readonly, nonatomic) unsigned long long starPoints;
@property (readonly, nonatomic) unsigned long long maxStarPoints;
@property (readonly, nonatomic) unsigned long long minStarPoints;
@property (readonly, nonatomic) double starRadius;
@property (readonly, nonatomic) double maxStarRadius;
@property (readonly, nonatomic) double minStarRadius;
@property (readonly, nonatomic) double arrowHead;
@property (readonly, nonatomic) double maxArrowHead;
@property (readonly, nonatomic) double minArrowHead;
@property (readonly, nonatomic) double arrowIndent;
@property (readonly, nonatomic) double maxArrowIndent;
@property (readonly, nonatomic) double minArrowIndent;

+ (id)doubleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)leftSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)plusWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)rightSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)starWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (unsigned long long)hash;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)description;
- (id)initWithArchive:(const void *)a0;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRectangular;
- (void)saveToArchive:(void *)a0;
- (id)initWithType:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
- (id)bezierPathWithoutFlips;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForArrow;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForPlus;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarPoints;
- (BOOL)p_isFlippedDoubleArrow;
- (BOOL)p_isRightFacingArrow;
- (struct CGPath { } *)p_newArrowPath;
- (struct CGPath { } *)p_newPlusPath;
- (struct CGPath { } *)p_newStarPath;
- (void)p_setControlKnobPointForArrow:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForPlus:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint { double x0; double x1; })a0;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)inferredAccessibilityDescription;
- (BOOL)p_isArrowType;

@end
