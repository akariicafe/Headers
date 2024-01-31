@interface HDSyncAnchorEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)updateReceivedVersion:(int)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)enumerateSyncAnchorsForStoreID:(long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)getMinimumSyncAnchorsOfType:(long long)a0 anchorMap:(id)a1 updatedSince:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)getRequestedVersion:(id *)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)getSyncAnchorsOfType:(long long)a0 anchorMap:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)prepareSyncAnchorsForEntityIdentifiers:(id)a0 store:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)resetAllSyncAnchorsOfType:(long long)a0 syncProvenances:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)resetNextAnchorsIfNeededForStore:(id)a0 profile:(id)a1 minimumElapsedTime:(double)a2 error:(id *)a3;
+ (BOOL)resetSyncAnchorsOfType:(long long)a0 store:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)resetSyncStore:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setAcknowledgedAnchorsWithMap:(id)a0 store:(id)a1 resetNext:(BOOL)a2 resetInvalid:(BOOL)a3 profile:(id)a4 error:(id *)a5;
+ (long long)syncAnchorOfType:(long long)a0 entityIdentifier:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)updateLocalVersion:(int)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)updateRequestedVersion:(int)a0 entityIdentifier:(id)a1 store:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)updateSyncAnchor:(long long)a0 type:(long long)a1 entityIdentifier:(id)a2 store:(id)a3 updatePolicy:(long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)updateSyncAnchor:(long long)a0 type:(long long)a1 updateDate:(id)a2 entityIdentifier:(id)a3 store:(id)a4 updatePolicy:(long long)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)updateSyncAnchorsWithMap:(id)a0 type:(long long)a1 store:(id)a2 updatePolicy:(long long)a3 resetInvalid:(BOOL)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)updateSyncAnchorsWithMap:(id)a0 type:(long long)a1 updateDate:(id)a2 store:(id)a3 updatePolicy:(long long)a4 resetInvalid:(BOOL)a5 profile:(id)a6 error:(id *)a7;

@end
