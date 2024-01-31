@interface StabilizationSuccessClassifier : NSObject

@property int classifierMode;
@property unsigned long long subsegmentLength;
@property unsigned long long subsegmentStep;
@property (readonly) float lastClassifierScore;

- (id)init;
- (id)getSequentialAnalysisCoeffsDict;
- (void)AddStats:(struct StabStatsRecord { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 toDict:(id)a1 withBaseName:(id)a2;
- (id)applyClassifierToOverlappedSegments:(void *)a0 withCoefficientsDict:(id)a1 movieSize:(struct Int32Size { int x0; int x1; })a2 firstIndex:(int)a3 lastIndex:(int)a4 stride:(int)a5 length:(int)a6 result:(float *)a7 verbose:(BOOL)a8 minThreshold:(float)a9;
- (float)calcLogisticForStats:(id)a0 paramsForStats:(id)a1 error:(id *)a2;
- (id)calcStatsDictForArray:(id)a0 withKey:(id)a1 firstIndex:(int)a2 lastIndex:(int)a3 usingTempStorage:(void *)a4 outErr:(id *)a5;
- (id)classifySequentialAnalysisSuccess:(void *)a0 movieSize:(struct Int32Size { int x0; int x1; })a1 precalcedFeatures:(id)a2 result:(float *)a3;
- (id)getDefaultParamDict;
- (id)getSequentialParamDict;
- (id)getTripodCorrectionParamDict;
- (id)statsDictFromFrameArray:(id)a0 firstIndex:(int)a1 lastIndex:(int)a2 errorOut:(id *)a3;
- (BOOL)testForHomographies:(const void *)a0 movieSize:(struct Int32Size { int x0; int x1; })a1 firstIndex:(int)a2 lastIndex:(int)a3 scoreThreshold:(float)a4 errorOut:(id *)a5 verbose:(BOOL)a6;

@end
