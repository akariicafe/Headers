@class PHImportSource, NSMutableDictionary, NSString, NSError, NSDate, NSMutableArray, PHImportException;

@interface PHImportResults : PHImportExceptionRecorder

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSMutableDictionary *pmrInfo;
@property (retain, nonatomic) NSMutableArray *importRecords;
@property (retain) NSString *uuid;
@property (readonly) PHImportException *highestPriorityException;
@property (nonatomic) unsigned char result;
@property (readonly) PHImportSource *importSource;
@property (readonly) unsigned long long importedCount;
@property (readonly) unsigned long long failedToImportCount;
@property (readonly) NSError *error;

+ (id)resultsWithException:(id)a0;
+ (id)resultsWithExceptions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (double)runTime;
- (id)generatePMRInfo;
- (void)addImportRecord:(id)a0;
- (void)addUnsupportedPath:(id)a0;
- (id)exceptions;
- (id)importRecordExceptions;
- (void)insertStart:(id)a0 end:(id)a1 intoGroups:(id)a2 ofType:(unsigned long long)a3;
- (void)log:(id)a0 activity:(id)a1 description:(id)a2 digits:(unsigned long long)a3;
- (void)logPMR;
- (void)verifyGroups:(id)a0;

@end
