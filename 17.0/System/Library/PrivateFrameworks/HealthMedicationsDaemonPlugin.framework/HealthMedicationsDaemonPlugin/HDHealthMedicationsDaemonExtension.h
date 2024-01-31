@class HDOntologyMedsScanningFeatureEvaluator, NSString, HKMedicationsBehavior, NSArray, HDMedicationPeriodicScheduler, HDDaemon, HDOntologyCoreMedsFeatureEvaluator, HDOntologyMedsEducationFeatureEvaluator, HDDrugInteractionFactorStateProvider, HDMedicationCountProvider, HDOntologyInteractionsFeatureEvaluator;

@interface HDHealthMedicationsDaemonExtension : NSObject <HDHealthDaemonExtension> {
    HDMedicationCountProvider *_medicationCountProvider;
    HDDrugInteractionFactorStateProvider *_drugInteractionStateProvider;
    HDOntologyCoreMedsFeatureEvaluator *_coreMedsFeatureEvaluator;
    HDOntologyMedsEducationFeatureEvaluator *_medsEducationFeatureEvaluator;
    HDOntologyInteractionsFeatureEvaluator *_interactionsFeatureEvaluator;
    HDOntologyMedsScanningFeatureEvaluator *_medsScanningFeatureEvaluator;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HKMedicationsBehavior *medicationsBehavior;
@property (readonly, nonatomic) NSArray *ontologyFeatureEvaluators;
@property (readonly, nonatomic) HDMedicationPeriodicScheduler *periodicScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
