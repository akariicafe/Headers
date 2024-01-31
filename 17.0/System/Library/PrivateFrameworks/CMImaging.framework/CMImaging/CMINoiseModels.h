@interface CMINoiseModels : NSObject

+ (float)_fpnrScalingFactor:(id)a0 darkCurrentNoiseCalibration:(id)a1 fpnrEnabled:(BOOL)a2;
+ (float)_fpnrSpatialStdDev:(id)a0 darkCurrentNoiseCalibration:(id)a1 fpnrEnabled:(BOOL)a2;
+ (struct CMINoiseModel { int x0; float x1; float x2; float x3; float x4; })calculateBasicNoiseModel:(id)a0;
+ (struct CMINoiseModel { int x0; float x1; float x2; float x3; float x4; })calculateNoiseModel:(id)a0 darkCurrentNoiseTuningParams:(id)a1;

@end
