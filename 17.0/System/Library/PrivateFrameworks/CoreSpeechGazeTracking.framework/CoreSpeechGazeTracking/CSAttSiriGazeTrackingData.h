@class NSMutableArray, NSMutableDictionary;

@interface CSAttSiriGazeTrackingData : NSObject

@property (nonatomic) BOOL hasFace;
@property (nonatomic) BOOL mouthOpen;
@property (nonatomic) struct CGPoint { double x; double y; } gazePoint;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } rightEyeTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } leftEyeTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } lookTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) void /* unknown type, empty encoding */ lookAtPoint;
@property (nonatomic) void /* unknown type, empty encoding */ leftScreenGazePoint;
@property (nonatomic) void /* unknown type, empty encoding */ rightScreenGazePoint;
@property (nonatomic) void /* unknown type, empty encoding */ pose;
@property (retain, nonatomic) NSMutableArray *blendshapeDataBuffer;
@property (nonatomic) unsigned int blendshapeDataBufferSize;
@property (nonatomic) double rawX;
@property (nonatomic) double rawY;
@property (nonatomic) double smoothedX;
@property (nonatomic) double smoothedY;
@property (nonatomic) float rawRightLookAtX;
@property (nonatomic) float rawRightLookAtY;
@property (nonatomic) float rawRightLookAtZ;
@property (nonatomic) float rawLeftLookAtX;
@property (nonatomic) float rawLeftLookAtY;
@property (nonatomic) float rawLeftLookAtZ;
@property (nonatomic) float relativeFaceXPosition;
@property (nonatomic) float relativeFaceYPosition;
@property (nonatomic) float relativeFaceZPosition;
@property (nonatomic) float relativeFacePitch;
@property (nonatomic) float relativeFaceYaw;
@property (nonatomic) float relativeFaceRoll;
@property (retain, nonatomic) NSMutableArray *blendshapeNames;
@property (retain, nonatomic) NSMutableDictionary *blendshapeLocationToIndexMap;
@property (retain, nonatomic) NSMutableDictionary *blendShapes;
@property (retain, nonatomic) NSMutableArray *rawLookAtPositionXs;
@property (retain, nonatomic) NSMutableArray *rawLookAtPositionYs;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)_lookAtPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)faceDataDescription;
- (id)initWithTrackingData:(id)a0;
- (void)makeBlendShapeArray:(const float *)a0;
- (void)populateBlendShapeArray;
- (void)populateRayTracingData;
- (struct SCNVector3 { float x0; float x1; float x2; })position:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setBlendShapeIndexMapping;

@end
