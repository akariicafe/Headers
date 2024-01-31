@interface PLCoreDataRecorder : NSObject

+ (BOOL)stopRecording;
+ (BOOL)isRecording;
+ (void)_reset;
+ (struct sqlite3 { } *)_dbHandleFromConnection:(id)a0;
+ (BOOL)_installConnectionSwizzle;
+ (BOOL)_installRecorder;
+ (long long)_libraryIDForDb:(struct sqlite3 { } *)a0;
+ (void)_recordExecutedStatement:(struct sqlite3_stmt { } *)a0 db:(struct sqlite3 { } *)a1 normalizedSQL:(id)a2 expandedSQL:(id)a3 plan:(id)a4 duration:(double)a5 pageHitCountBeforeExecution:(int)a6 pageMissCountBeforeExecution:(int)a7;
+ (id)_recordedStatementsAndReset:(BOOL)a0;
+ (BOOL)_shouldRecordPhotoLibraryDb:(struct sqlite3 { } *)a0;
+ (id)recordedStatements;
+ (id)recordedStatementsAndReset;
+ (id)recordedStatementsDescription;
+ (BOOL)startRecordingForLibraries:(id)a0 limitToMarkedThreads:(BOOL)a1 includeBindVariables:(BOOL)a2 includeIOMetrics:(BOOL)a3 entryDecorator:(id /* block */)a4 entriesAvailableHandler:(id /* block */)a5;

@end
