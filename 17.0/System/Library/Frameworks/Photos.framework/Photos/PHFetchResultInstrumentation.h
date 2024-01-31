@class NSString, PHFetchResult, NSObject, NSSQLiteDatabaseStatistics;
@protocol OS_os_log;

@interface PHFetchResultInstrumentation : NSObject <NSSQLiteDatabaseTraceDelegate> {
    PHFetchResult *_fetchResult;
    NSString *_importantFetchName;
    struct { NSObject<OS_os_log> *log; unsigned long long signpostId; } _fetchSignpost;
    struct { NSObject<OS_os_log> *log; unsigned long long signpostId; } _importantFetchSignpost;
    BOOL _wasTrackingStatistics;
    NSSQLiteDatabaseStatistics *_statsStart;
    double _timeStart;
    long long _byteCount;
    long long _rowCount;
    double _duration;
    BOOL _suppressSlowFetchReports;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)bytesPerRow;
- (void)managedObjectContext:(id)a0 didExecuteFetchRequest:(id)a1 withSQLString:(id)a2 bindVariables:(id)a3 rowCount:(long long)a4;
- (void)managedObjectContext:(id)a0 willExecuteFetchRequest:(id)a1;
- (void)didFailFetchRequestWithContext:(id)a0;
- (BOOL)areBacktracesEnabled;
- (void)beginTrackingStatisticsWithContext:(id)a0;
- (unsigned char)classifyFetchPerformanceLogLevel;
- (void)classifyFetchPerformanceWithTuple:(id /* block */)a0;
- (void)didExecuteFetchRequestWithContext:(id)a0 resultCount:(unsigned long long)a1 sqlString:(id)a2 bindVariables:(id)a3;
- (void)endTrackingStatisticsWithContext:(id)a0 resultCount:(unsigned long long)a1 sqlString:(id)a2 bindVariables:(id)a3;
- (id)formatBindVariable:(id)a0;
- (id)formatSqlString:(id)a0 withBindVariables:(id)a1;
- (BOOL)isPerformanceLoggingDisabled;
- (void)logFetchWithSqlString:(id)a0 bindVariables:(id)a1;
- (void)willExecuteFetchRequestWithContext:(id)a0;

@end
