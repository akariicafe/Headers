@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;

+ (id)pathSourceAtAngleOfSize:(struct CGSize { double x0; double x1; })a0 forType:(int)a1;
+ (id)pathSourceOfLength:(double)a0;

- (id)description;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRectangular;
- (id)bezierPath;
- (void)saveToArchive:(void *)a0;
- (void)bend;
- (struct CGPoint { double x0; double x1; })fixedPointForControlKnobChange;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)initWithBezierPath:(id)a0;
- (BOOL)isLineSegment;
- (unsigned long long)numberOfControlKnobs;
- (void)p_setBezierPath:(id)a0;
- (long long)pathElementIndexForKnobTag:(unsigned long long)a0;

@end
