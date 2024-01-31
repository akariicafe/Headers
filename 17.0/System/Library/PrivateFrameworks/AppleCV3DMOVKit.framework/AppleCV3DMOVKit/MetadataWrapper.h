@interface MetadataWrapper : NSObject

+ (id)decodeAccel:(id)a0;
+ (id)decodeCLLocation:(id)a0 timestamp:(double *)a1;
+ (id)decodeCMDeviceMotion:(id)a0;
+ (id)decodeCompass:(id)a0;
+ (id)decodeGyro:(id)a0;
+ (id)encodeAccelerometerData:(id)a0 andAdditionalData:(id)a1;
+ (id)encodeCompassData:(id)a0;
+ (id)encodeCoreLocationData:(id)a0 timestamp:(double)a1 andAdditionalData:(id)a2;
+ (id)encodeDeviceMotionData:(id)a0 andAdditionalData:(id)a1;
+ (id)encodeGyroscopeData:(id)a0 andAdditionalData:(id)a1;
+ (id)decodeCLLocation:(id)a0;

@end
