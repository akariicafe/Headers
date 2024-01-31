@class NSString, HDSyncEntityIdentifier;

@interface HDRaceRouteClusterEntity : HDHealthEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncAnchor;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)supportsSyncStore:(id)a0;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (id)privateSubEntities;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)entityForClusterUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateRoutePointsForClusterUUID:(id)a0 workoutSelection:(unsigned long long)a1 timestampAnchor:(double)a2 limit:(unsigned long long)a3 profile:(id)a4 error:(id *)a5 dataHandler:(id /* block */)a6;
+ (id)insertCodableCluster:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (id)insertOrUpdateRacingCluster:(id)a0 routeSnapshot:(id)a1 syncIdentity:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)pruneRaceRouteClustersWithEligibleEntities:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)raceRouteClustersForActivityType:(unsigned long long)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)unitTest_deleteAllClusterAndBackingDataInTransaction:(id)a0 error:(id *)a1;


@end
