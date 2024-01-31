@class NSString, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface NNMKSQLJournal : NSObject

@property (retain, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSMutableData *currentFileData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue;
@property (nonatomic) unsigned long long filesCount;

- (id)initWithPath:(id)a0;
- (void)_flush;
- (void).cxx_destruct;
- (unsigned long long)_currentFilesCount;
- (id)_journalFilesEnumerator;
- (id)_nextFilePath;
- (id)_sortedJournalFiles;
- (BOOL)appendSQLStatement:(id)a0;
- (void)deleteJournalFiles;
- (void)flushIfNeeded;
- (BOOL)isJournalOverflow;
- (void)mergeUsingBlock:(id /* block */)a0;

@end
