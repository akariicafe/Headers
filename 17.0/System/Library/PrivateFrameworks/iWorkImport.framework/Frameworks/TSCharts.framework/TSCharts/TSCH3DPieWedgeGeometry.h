@class TSCH3DNormalDirectionMapper;

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry

@property (nonatomic) float startAngle;
@property (nonatomic) float endAngle;
@property (nonatomic) long long angleSteps;
@property (nonatomic) long long radiusSteps;
@property (nonatomic) long long bevelEdgeSteps;
@property (nonatomic) float radius;
@property (nonatomic) float bottomZ;
@property (nonatomic) float topZ;
@property (readonly, nonatomic) unsigned int capOffset;
@property (readonly, nonatomic) unsigned int capCount;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper;

- (id)init;
- (void).cxx_destruct;
- (void)generateRoundedTop:(void *)a0 radiusArray:(void *)a1;
- (float)bevelHeight;
- (void)generateArrays;
- (int)geometryCount;
- (BOOL)isFullCircle;
- (void)p_generateAngles:(void *)a0;
- (void)p_generateBevelCoordinates:(void *)a0 andAngles:(void *)a1 radiusArray:(const void *)a2 topArray:(const void *)a3;
- (id)selectionKnobPositions;

@end
