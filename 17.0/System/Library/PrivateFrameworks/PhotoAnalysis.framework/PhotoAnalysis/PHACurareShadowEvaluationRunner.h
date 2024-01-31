@class NSArray, NSString, NSDictionary, PHPhotoLibrary, PGManager;

@interface PHACurareShadowEvaluationRunner : NSObject

@property (retain, nonatomic) NSArray *modelInfoArray;
@property (retain, nonatomic) NSString *modelInputName;
@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *lossName;
@property (retain, nonatomic) NSString *fingerprintVersion;
@property (retain, nonatomic) NSString *datasetPolicy;
@property (retain, nonatomic) NSString *labelPolicy;
@property (retain, nonatomic) NSString *positivesDatasetName;
@property (retain, nonatomic) NSString *positivesSubsetName;
@property (retain, nonatomic) NSString *negativesDatasetName;
@property (retain, nonatomic) NSString *negativesSubsetName;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PGManager *graphManager;
@property (retain, nonatomic) NSDictionary *filtersByDatasetName;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;

+ (id)runnerLog;

- (void).cxx_destruct;
- (id)evaluateModel:(id)a0 datasetDictionary:(id)a1 error:(id *)a2;
- (void)generateCAEventForResults:(id)a0;
- (id)getDatasetWithError:(id *)a0;
- (id)initWithModelInfoArray:(id)a0 modelInputName:(id)a1 modelOutputName:(id)a2 lossName:(id)a3 fingerprintVersion:(id)a4 datasetPolicy:(id)a5 labelPolicy:(id)a6 positivesDatasetName:(id)a7 positivesSubsetName:(id)a8 negativesDatasetName:(id)a9 negativesSubsetName:(id)a10 photoLibrary:(id)a11 graphManager:(id)a12 filtersByDatasetName:(id)a13 trialDeploymentID:(id)a14 trialExperimentID:(id)a15 trialTreatmentID:(id)a16;
- (BOOL)runWithError:(id *)a0;

@end
