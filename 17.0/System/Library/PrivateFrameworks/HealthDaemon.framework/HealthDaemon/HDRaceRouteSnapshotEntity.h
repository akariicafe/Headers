@interface HDRaceRouteSnapshotEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)insertSnapshotData:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)pruneUnreachableDataWithTransaction:(id)a0 error:(id *)a1;

- (BOOL)deleteDataWithTransaction:(id)a0 error:(id *)a1;
- (id)snapshotDataWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)updateSnapshotData:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
