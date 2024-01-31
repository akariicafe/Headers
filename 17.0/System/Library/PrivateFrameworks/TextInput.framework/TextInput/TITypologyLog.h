@class NSDictionary, NSString, NSUUID, NSMutableSet, TIRollingLog, TIKeyboardState, NSDate;
@protocol TITypologyLogDelegate;

@interface TITypologyLog : NSObject <NSCopying, TITypologyLogPersisting, TITypologyLogging, TITraceLogParsingDelegate, TITypologyLogProviding>

@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) TIRollingLog *records;
@property (readonly, nonatomic) TIRollingLog *traceRecords;
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses;
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState;
@property (weak, nonatomic) id<TITypologyLogDelegate> delegate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long partIndex;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) unsigned long long typologyLogVersion;
@property (readonly, nonatomic) unsigned long long traceLogVersion;
@property (readonly, nonatomic) NSString *recommendedTypologyLogFilename;
@property (readonly, nonatomic) NSString *recommendedTraceLogFilename;
@property (readonly, nonatomic) unsigned long long numTypologyRecords;
@property (readonly, nonatomic) unsigned long long numTraceRecords;
@property (readonly, nonatomic) unsigned long long maxNumRecords;

+ (id)traceLogFilenameFromTypologyLogFilename:(id)a0;
+ (id)typologyLogURLFromTraceLogURL:(id)a0;
+ (BOOL)isTypologyLogFilename:(id)a0;
+ (id)typologyLogFilenameFromTraceLogFilename:(id)a0;
+ (id)typologyLogFromTypologyLogFile:(id)a0 andTraceLogFile:(id)a1 error:(id *)a2;
+ (id)traceLogURLFromTypologyLogURL:(id)a0;
+ (BOOL)isTraceLogFilename:(id)a0;
+ (id)_adjustFilename:(id)a0 oldPrefix:(id)a1 newPrefix:(id)a2 oldSuffix:(id)a3 newSuffix:(id)a4;

- (id)filename;
- (void)enumerateParsedTraceRecordsWithBlock:(id /* block */)a0;
- (void)enumerateParsedTraceRecordsWithBlockIncludingStop:(id /* block */)a0;
- (id)init;
- (id)traceLogHeader;
- (id)propertyList;
- (void)logRecord:(id)a0 trace:(id)a1;
- (id)trace;
- (id)recordSummary;
- (void)enumerateTypologyRecordsWithBlock:(id /* block */)a0;
- (void)logRecord:(id)a0;
- (BOOL)loggedRecordOfClass:(Class)a0;
- (void)traceRecordParsed:(id)a0;
- (void)_logRecord:(id)a0 trace:(id)a1;
- (id)parsedTraceRecordMatchingUUID:(id)a0;
- (void)enumerateTraceRecordsWithBlock:(id /* block */)a0;
- (void)parseTraceLogContent:(id)a0;
- (id)initWithUUID:(id)a0 partIndex:(unsigned long long)a1 date:(id)a2 systemVersion:(id)a3 buildVersion:(id)a4 clientIdentifier:(id)a5 config:(id)a6;
- (void)enumerateTraceRecordsWithBlockIncludingStop:(id /* block */)a0;
- (id)propertyListWithTrace;
- (BOOL)writeToTypologyLogFile:(id)a0 andTraceLogFile:(id)a1 withAccessibilityInfo:(id)a2 error:(id *)a3;
- (void)enumerateRecordsWithBlock:(id /* block */)a0;
- (id)typologyRecordUUIDsIncludedInRange:(id)a0 endUUID:(id)a1;
- (id)initWithTypologyLog:(id)a0;
- (id)timestamp;
- (id)typologyRecordsMatchingUUIDRange:(id)a0 endUUID:(id)a1;
- (void)traceHeaderParsed:(id)a0;
- (BOOL)_writeToTraceLogFile:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)textSummary;
- (void)enumerateTypologyRecordsWithBlockIncludingStop:(id /* block */)a0;
- (id)typologyRecordMatchingUUID:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (BOOL)_writeToTypologyLogFile:(id)a0 withAccessibilityInfo:(id)a1 includeTraceLogContent:(BOOL)a2 error:(id *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_recommendedFilenameWithPrefix:(id)a0 andSuffix:(id)a1;
- (id)traceRecordMatchingUUID:(id)a0;

@end
