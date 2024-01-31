@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLFetchRecording : NSObject {
    _Atomic int _numberOfAllocationsSinceLastRemap;
    struct atomic_flag { _Atomic BOOL _Value; } _remapPending;
    int _fd;
    unsigned long long _maxFileSize;
    NSObject<OS_dispatch_queue> *_remapQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _indexLock;
    void *_indexLocked_buffer;
    unsigned long long _indexLocked_bufferLen;
    NSMutableDictionary *_indexLocked_indexEntriesByNormSQLHash;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long mode;

+ (id)_backtrace;
+ (void)_assertAddress:(long long)a0 isValidWithLength:(unsigned long long)a1 buffer:(void *)a2 bufferLength:(unsigned long long)a3;
+ (void)_enumerateVariationsFromEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0 block:(id /* block */)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_indexLocked_allocateSizeToFit:(unsigned long long)a0 currentEOF:(long long)a1 buffer:(void *)a2 bufferLength:(unsigned long long)a3 index:(id)a4;
+ (void)_indexLocked_enumerateEntryHeadersFromBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 block:(id /* block */)a2;
+ (void)_indexLocked_populateStatementIndex:(id)a0 fromBuffer:(void *)a1 bufferLength:(unsigned long long)a2;
+ (BOOL)_statsForStatementAreInteresting:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0 totalPages:(unsigned int)a1;
+ (void)_updateRunningVarianceForEntry:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0 givenPageCount:(unsigned int)a1;
+ (void)_writeInitialHeaderToBuffer:(void *)a0 bufferLen:(unsigned long long)a1;
+ (id)backtraceForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (const char *)bindVariablesForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (const char *)contextNameForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (BOOL)deleteRecording:(id)a0 error:(id *)a1;
+ (double)meanPageCountForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (id)multiInCountsForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (const char *)normalizedSQLForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (double)stdDevPageCountForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;
+ (id)suggestedFilenameForCurrentProcess;
+ (double)varPageCountForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0;

- (int)fd;
- (void)close;
- (void)dealloc;
- (struct PLFetchRecordingFileHeader { char x0[13]; char x1[129]; char x2[37]; char x3[37]; unsigned int x4; unsigned int x5; unsigned int x6; } *)fileHeader;
- (void).cxx_destruct;
- (BOOL)_isOpen;
- (void)_considerIfRemapIsNeeded;
- (void)_indexLocked_close;
- (BOOL)_indexLocked_remapFile;
- (void)_indexLocked_unmapFile;
- (void)_recordVariationWithEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0 timestamp:(double)a1 pagesHit:(unsigned int)a2 pagesMissed:(unsigned int)a3 rowsAffected:(unsigned int)a4 duration:(double)a5 QOS:(unsigned int)a6;
- (void)_scheduleRemapAfterDelay;
- (struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)entryForNormalizedSQL:(id)a0;
- (void)enumerateEntryHeaders:(id /* block */)a0;
- (void)enumerateVariationsFromEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)a0 block:(id /* block */)a1;
- (id)initWithMode:(unsigned long long)a0 atFileURL:(id)a1 size:(unsigned long long)a2;
- (BOOL)recordStatementWithNormalizedSQL:(id)a0 bindVariablesAsString:(id)a1 multiInCounts:(id)a2 contextName:(id)a3 pagesHit:(unsigned int)a4 pagesMissed:(unsigned int)a5 rowCount:(unsigned int)a6 duration:(double)a7 QOS:(unsigned int)a8;
- (BOOL)remap;

@end
