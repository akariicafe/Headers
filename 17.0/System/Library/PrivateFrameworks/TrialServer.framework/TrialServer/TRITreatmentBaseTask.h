@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing;

- (unsigned long long)hash;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)description;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;

@end
