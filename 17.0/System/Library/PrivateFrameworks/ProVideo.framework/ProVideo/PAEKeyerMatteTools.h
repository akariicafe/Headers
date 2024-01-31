@interface PAEKeyerMatteTools : NSObject

- (id)init;
- (BOOL)addAdvancedParametersWithParamAPI:(id)a0 hideSimpleViewParam:(unsigned int)a1;
- (BOOL)addLevelsParametersWithParamAPI:(id)a0 hideSimpleViewParam:(unsigned int)a1;
- (BOOL)addParametersWithParamAPI:(id)a0 hideSimpleViewParam:(unsigned int)a1 isLumaKey:(BOOL)a2;
- (BOOL)doMatteManipulationWithInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 pixelAspectRatio:(float)a1 fieldHeight:(float)a2 doInvertMatte:(BOOL)a3 inputIsInverted:(BOOL)a4 fillHoles:(BOOL)a5 scaling:(BOOL)a6 blendingGamma:(float)a7 blackLevel:(double)a8 whiteLevel:(double)a9 gammaLevel:(double)a10 preKeyedInputNode:(void *)a11 outputNode:(void *)a12;
- (BOOL)doMatteManipulationWithParamAPI:(id)a0 withPrivateParamAPI:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2 pixelAspectRatio:(float)a3 fieldHeight:(float)a4 doInvertMatte:(BOOL)a5 inputIsInverted:(BOOL)a6 fillHoles:(BOOL)a7 scaling:(BOOL)a8 blendingGamma:(float)a9 preKeyedInputNode:(void *)a10 outputNode:(void *)a11;

@end
