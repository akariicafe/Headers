@interface HDMedicationExposableDoseEventEngine : NSObject

+ (id)doseEventsForDateInterval:(id)a0 medicationIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)writeDoseEvents:(id)a0 profile:(id)a1 error:(id *)a2;

@end
