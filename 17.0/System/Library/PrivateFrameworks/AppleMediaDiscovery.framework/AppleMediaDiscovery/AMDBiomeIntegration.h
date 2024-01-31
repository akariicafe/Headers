@interface AMDBiomeIntegration : NSObject

+ (id)createRowSetFrom:(id)a0 withFetchDescriptor:(id)a1;
+ (id)fetchDataFromStream:(id)a0 usingDescriptor:(id)a1 error:(id *)a2;
+ (id)fetchLatestEventTimestampFromEvents:(id)a0;
+ (id)fetchLatestRowsFromStream:(id)a0 withFields:(id)a1 withBiomeTimestampDict:(id)a2 error:(id *)a3;
+ (id)queryBiomeFor:(id)a0 withError:(id *)a1;
+ (id)queryBiomeStream:(id)a0 withEventFields:(id)a1 fromTimestamp:(id)a2 error:(id *)a3;
+ (id)runBiomeQuery:(id)a0 error:(id *)a1;

@end
