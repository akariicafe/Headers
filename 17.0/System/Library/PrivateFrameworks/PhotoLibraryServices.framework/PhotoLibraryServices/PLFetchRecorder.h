@class NSString, PLFetchRecording, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLFetchRecorder : NSObject <NSSQLiteDatabaseTraceDelegate> {
    PLFetchRecording *_recording;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSObject<OS_dispatch_queue> *_fileWatcherQueue;
    NSObject<OS_dispatch_source> *_fileWatcherSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_findRecordingsWithinURL:(id)a0;
+ (struct PLFetchRecorderSQLGeneralizationResult { id x0; id x1; })_generalizedStringByFactoringOutInClausesFromSQL:(id)a0;
+ (id)_generalizedStringByFactoringOutLimitClauseFrom:(id)a0;
+ (BOOL)_isRecordingFileFromURL:(id)a0;
+ (id)_paramStringFromBindVariableComponent:(id)a0;
+ (id)fileURLsToExistingRecordings;
+ (struct PLFetchRecorderSQLGeneralizationResult { id x0; id x1; })generalizedSQLFromSQL:(id)a0 bindVariables:(id)a1 fromFetchRequest:(id)a2;
+ (BOOL)isCurrentProcessEnabledForRecordingBundle:(id)a0;
+ (id)sqlFromGeneralizedSQL:(id)a0 bindVars:(id)a1 multiInCounts:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)managedObjectContext:(id)a0 didExecuteFetchRequest:(id)a1 withSQLString:(id)a2 bindVariables:(id)a3 rowCount:(long long)a4;
- (void)managedObjectContext:(id)a0 willExecuteFetchRequest:(id)a1;
- (void)_startRecording;
- (void)_startWatchingRecordingFile;
- (void)_stopRecording;
- (void)_stopWatchingRecordingFile;

@end
