@interface ADPearlColorInFieldCalibrationResult : NSObject

@property (nonatomic) float deltaRotationX;
@property (nonatomic) float deltaRotationY;
@property (nonatomic) float deltaRotationZ;
@property (nonatomic) float stdX;
@property (nonatomic) float stdY;
@property (nonatomic) float stdZ;
@property (nonatomic) float absoluteRotationX;
@property (nonatomic) float absoluteRotationY;
@property (nonatomic) float absoluteRotationZ;
@property (nonatomic) float factoryRotationX;
@property (nonatomic) float factoryRotationY;
@property (nonatomic) float factoryRotationZ;
@property (nonatomic) float absoluteRotationPostISFX;
@property (nonatomic) float absoluteRotationPostISFY;
@property (nonatomic) float absoluteRotationPostISFZ;
@property (nonatomic) float confidence;
@property (nonatomic) float preRelative2FactoryX;
@property (nonatomic) float preRelative2FactoryY;
@property (nonatomic) float preRelative2FactoryZ;
@property (nonatomic) float postRelative2FactoryX;
@property (nonatomic) float postRelative2FactoryY;
@property (nonatomic) float postRelative2FactoryZ;
@property (nonatomic) float postRelative2PrevX;
@property (nonatomic) float postRelative2PrevY;
@property (nonatomic) float postRelative2PrevZ;
@property (nonatomic) void /* unknown type, empty encoding */ motionRotation;
@property (nonatomic) void /* unknown type, empty encoding */ motionTranslation;
@property (nonatomic) float validDepthPercentage;
@property (nonatomic) BOOL executed;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pearlToColorExtrinsics;

- (id)dictionaryRepresentation;

@end
