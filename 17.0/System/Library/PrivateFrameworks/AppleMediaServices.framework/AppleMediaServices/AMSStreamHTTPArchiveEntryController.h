@class AMSCircularBuffer;

@interface AMSStreamHTTPArchiveEntryController : NSObject

@property (class, readonly, nonatomic) AMSCircularBuffer *buffer;

+ (void)initialize;
+ (BOOL)_writeHeaderToStream:(id)a0;
+ (BOOL)_writeData:(id)a0 enumeratingBytesToStream:(id)a1;
+ (void)_streamToDiskWithEntries:(id)a0;
+ (id)ams_combineEntriesForPath:(id)a0 error:(id *)a1;
+ (id)_footerData;
+ (id)_harFileURLsInPath:(id)a0;
+ (void)ams_streamEntriesToDisk;
+ (void)ams_addEntriesForTaskInfo:(id)a0;
+ (id)_createNewFileWithError:(id *)a0 outputDirectory:(id)a1 forCombining:(BOOL)a2;
+ (void)_periodicCleanup;
+ (BOOL)_writeFooterToStream:(id)a0;
+ (id)_headerData;
+ (void)_updateMaxBufferSize;
+ (void)_writeEntries:(id)a0 toStream:(id)a1;
+ (void)_performCombiningFiles:(id)a0 toStream:(id)a1;
+ (BOOL)_shouldWriteEntryDirectlyToDiskForURLString:(id)a0;

@end
