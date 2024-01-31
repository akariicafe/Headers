@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (unsigned long long)numberMaxoutLayers;
+ (id)modelName;
+ (const void *)cellStartsY;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const void *)importantClasses;
+ (BOOL)poseSquare;
+ (unsigned long long)mumberPosClasses;
+ (const void *)ratios;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (const void *)cellStartsX;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)initializeBuffers;

@end
