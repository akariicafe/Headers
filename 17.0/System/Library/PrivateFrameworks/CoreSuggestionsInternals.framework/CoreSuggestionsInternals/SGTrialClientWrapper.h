@class NSString, TRIRolloutIdentifiers, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface SGTrialClientWrapper : NSObject {
    TRIClient *_triClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_namespaceName;
    NSString *_experimentId;
    int _deploymentId;
    NSString *_treatmentId;
    TRIRolloutIdentifiers *_rolloutIdentifiers;
}

- (id)experimentId;
- (id)treatmentId;
- (id)deploymentId;
- (id)rolloutIdentifiers;
- (id)initWithClientIdentifier:(int)a0;
- (void).cxx_destruct;
- (id)modelPath;
- (void)updateFactors;
- (id)_modelDirectoryPathCreateIfNeeded:(BOOL)a0;
- (id)_modelNameForCurrentEnrollment;
- (id)_modelNameForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2;
- (id)_modelPathForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2 createIfNeeded:(BOOL)a3;
- (BOOL)_unarchiveFrom:(id)a0 to:(id)a1;
- (BOOL)_uncompressModelAtPath:(id)a0 toPath:(id)a1;
- (id)baseModelName;
- (void)cleanExperimentModelsFromTrialModelsFolder;
- (id)modelPathForCurrentEnrollment;
- (id)modelPathForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2;
- (id)modelPathForTriClient:(id)a0 andNamespace:(id)a1;
- (BOOL)refreshEnrollmentInformationForNamespace:(id)a0;
- (BOOL)refreshRolloutIdentifiersForNamespace:(id)a0;
- (void)uncompressModelAndUpdateFactors:(id)a0 destinationPath:(id)a1;

@end
