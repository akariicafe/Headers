@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
