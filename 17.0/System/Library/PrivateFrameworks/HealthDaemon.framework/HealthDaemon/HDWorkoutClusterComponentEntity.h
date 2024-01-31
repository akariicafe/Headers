@interface HDWorkoutClusterComponentEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)associateWorkout:(id)a0 withCluster:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateWorkoutsForCluster:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)numberOfWorkoutsInCluster:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)removeWorkout:(id)a0 fromCluster:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
