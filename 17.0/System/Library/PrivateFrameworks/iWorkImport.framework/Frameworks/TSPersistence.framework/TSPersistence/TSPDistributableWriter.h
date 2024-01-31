@class TSPDatabase, TSPDistributableFileManager, TSPDistributableArchiveOutputStream;

@interface TSPDistributableWriter : NSObject {
    TSPDistributableArchiveOutputStream *_outputStream;
    void *_encodedIds;
    void *_typesSeen;
    _Atomic BOOL _isCancelled;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    unsigned long long _processedEntriesCount;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)_initWithDatabase:(id)a0 fileManager:(id)a1 outputStream:(id)a2 checkCrc:(unsigned int)a3 includeToc:(BOOL)a4;
- (BOOL)_processEntry:(id)a0 tocEntries:(id)a1 progressContext:(id)a2 error:(id *)a3;
- (BOOL)goAndReportProgress:(BOOL)a0 error:(id *)a1 context:(id)a2;
- (id)initWithTangierPath:(id)a0 fileManager:(id)a1 outputStream:(id)a2 checkCrc:(unsigned int)a3;

@end
