@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;
+ (Class)workoutEventClass;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
