@class NSArray, NSMutableString, NSURL, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HDDiagnosticOperationDelegate;

@interface HDDiagnosticOperation : NSOperation {
    NSMutableArray *_attachments;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableString *reportContents;
@property (weak, nonatomic) id<HDDiagnosticOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSURL *attachmentDirectoryURL;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (readonly, copy) NSArray *attachments;
@property (readonly, copy) NSString *reportFilename;

+ (id)operationWithAttachmentDirectoryURL:(id)a0;

- (void)run;
- (void)main;
- (void)appendString:(id)a0;
- (id)stringFromDate:(id)a0;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (void)appendFormat:(id)a0;
- (id)_headerString;
- (void)appendNewline;
- (void)appendSeparator;
- (long long)fileSizeForURL:(id)a0;
- (id)initWithAttachmentDirectoryURL:(id)a0;
- (void)_appendString:(id)a0 newLine:(BOOL)a1;
- (BOOL)_copyDatabase:(struct sqlite3 { } *)a0 toDatabase:(struct sqlite3 { } *)a1;
- (id)_fileAttributesAtURL:(id)a0;
- (void)_queue_submitAttachment:(id)a0;
- (long long)_reportCountOfObjectsForEntityClass:(Class)a0 database:(id)a1;
- (long long)_reportCountOfObjectsInTable:(id)a0 database:(id)a1;
- (double)absoluteTimeForTimespec:(struct timespec { long long x0; long long x1; })a0;
- (void)appendStrongSeparator;
- (void)checkSchemaVersionForDatabase:(id)a0 currentSchema:(int)a1 futureSchema:(int)a2;
- (BOOL)copyDatabaseFromURL:(id)a0 toURL:(id)a1;
- (id)fileCreationDateForURL:(id)a0;
- (id)fileModificationDateForURL:(id)a0;
- (unsigned long long)getFileStatisticsForDirectoryWithURL:(id)a0 earliestModificationDate:(double *)a1 totalFileSize:(long long *)a2 maxFileSize:(long long *)a3;
- (id)openReadOnlyDatabaseAtURL:(id)a0;
- (id)prettyPrintFileSize:(long long)a0;
- (void)reportCountsForDatabase:(id)a0 entityClasses:(id)a1;
- (void)reportIntegrityForDatabase:(id)a0;
- (void)reportStatsForDatabaseAtURL:(id)a0;
- (void)submitAttachment:(id)a0;
- (void)submitAttachments:(id)a0;
- (void)verifyPermissionsForFileAtURL:(id)a0;

@end
