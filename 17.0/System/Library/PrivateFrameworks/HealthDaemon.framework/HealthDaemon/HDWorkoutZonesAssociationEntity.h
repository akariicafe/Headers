@interface HDWorkoutZonesAssociationEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)associateSyncedZonesSamplesWithUUIDs:(id)a0 withWorkoutUUID:(id)a1 syncIdentity:(id)a2 syncProvenance:(long long)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)associateZonesSamplesWithUUIDs:(id)a0 withWorkoutUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateZonesSamplesWithWorkoutPersistentID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;

- (id)zonesUUIDWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutUUIDWithTransaction:(id)a0 error:(id *)a1;

@end
