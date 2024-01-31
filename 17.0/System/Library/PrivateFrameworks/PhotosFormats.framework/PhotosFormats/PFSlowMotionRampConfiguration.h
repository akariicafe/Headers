@interface PFSlowMotionRampConfiguration : NSObject

@property (readonly, nonatomic) double rampTime;
@property (readonly, nonatomic) double introTime;
@property (readonly, nonatomic) double outroTime;
@property (readonly, nonatomic) double volumeSuppressionIntroTime;
@property (readonly, nonatomic) double volumeSuppressionOutroTime;
@property (readonly, nonatomic) unsigned long long playbackNumIntermediateSteps;
@property (readonly, nonatomic) unsigned long long exportNumIntermediateSteps;
@property (readonly, nonatomic) float playbackRampCurveExponent;
@property (readonly, nonatomic) float exportRampCurveExponent;

- (id)init;
- (void)computeRampToTargetRate:(float)a0 forExport:(BOOL)a1 outTimeSteps:(id *)a2 outIntermediateRates:(id *)a3;
- (id)initForRampDown:(BOOL)a0;

@end
