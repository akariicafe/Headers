@interface TSCH3DGenericAxisLabelPositioner : NSObject <TSCH3DAxisLabelPositioner> {
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _range;
    unsigned long long _axis;
    float _offset;
    unsigned int _alignment;
}

+ (id)vertical;
+ (id)horizontal;
+ (id)horizontalWithRange:(void *)a0;
+ (id)horizontalWithRange:(void *)a0 offset:(float)a1;
+ (id)verticalWithRange:(void *)a0;
+ (id)verticalWithRange:(void *)a0 offset:(float)a1;

- (BOOL)hasOffset;
- (id)init;
- (id).cxx_construct;
- (BOOL)isHorizontal;
- (unsigned int)alignmentForChartDirection:(void *)a0;
- (id)initWithAxis:(long long)a0 alignment:(unsigned int)a1 offset:(float)a2 range:(void *)a3;
- (float)labelGapForCount:(unsigned long long)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })positionForValue:(double)a0 count:(unsigned long long)a1 chartDirection:(void *)a2;

@end
