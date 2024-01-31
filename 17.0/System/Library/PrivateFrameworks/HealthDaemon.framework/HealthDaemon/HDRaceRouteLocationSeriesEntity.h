@class NSString;

@interface HDRaceRouteLocationSeriesEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)primaryKeyColumns;
+ (id)indicesWithBehavior:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)createRoutePointsFromWorkout:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)createTableSQLWithBehavior:(id)a0;
+ (BOOL)deleteSeriesDataWithIdentifier:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateRoutePointsForSeries:(long long)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 startDuration:(double)a3 finishDuration:(double)a4 transaction:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (BOOL)enumerateRoutePointsForSeries:(long long)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 transaction:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (BOOL)hasROWID;
+ (BOOL)insertCodableRoutePoints:(id)a0 seriesKey:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)insertCodableRoutePoints:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)triggersWithBehavior:(id)a0;


@end
