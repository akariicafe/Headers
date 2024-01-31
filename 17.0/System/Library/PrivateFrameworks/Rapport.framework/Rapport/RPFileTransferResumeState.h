@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPFileTransferResumeState : NSObject {
    NSMutableDictionary *_stateInfo;
}

@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *ucat;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *outputPath;
@property (retain, nonatomic) NSString *stateFilePath;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushTimer;
@property (nonatomic) double flushInterval;
@property (nonatomic) BOOL needsFlushing;

- (id)init;
- (void)dealloc;
- (id)version;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEmpty;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (BOOL)removeStateFile;
- (id)activeFileWithFileName:(id)a0;
- (id)activeFiles;
- (BOOL)addActiveFile:(id)a0;
- (BOOL)addFinishedFile:(id)a0;
- (id)finishedFileWithFileName:(id)a0;
- (id)finishedFiles;
- (BOOL)flushStateFile;
- (BOOL)loadStateFile;
- (BOOL)removeActiveFile:(id)a0;
- (BOOL)removeAllActiveAndFinishedFileItems;
- (BOOL)removeFinishedFile:(id)a0;
- (BOOL)removeUnusableOutputFileItems;
- (BOOL)removeUnusableSourceFileItems;
- (BOOL)scheduleStateFileFlush;

@end
