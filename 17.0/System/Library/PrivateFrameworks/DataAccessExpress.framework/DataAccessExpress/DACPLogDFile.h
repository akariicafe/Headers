@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface DACPLogDFile : NSObject {
    NSString *_path;
    int _fd;
    NSObject<OS_dispatch_source> *_fileEventDispatchSource;
    BOOL _fileWasDeleted;
}

@property (readonly, retain, nonatomic) NSString *folder;
@property (readonly, retain, nonatomic) NSString *baseName;
@property (readonly, retain, nonatomic) NSString *UUID;

- (void).cxx_destruct;
- (void)_beginWatchingFile;
- (void)_closeFileWithFileEventDispatchSource:(id)a0;
- (id)_filePathsMatchingPattern:(id)a0;
- (id)_getLatestMatchingFilePath;
- (void)_openFileOutDidCreateNewFile:(BOOL *)a0 outNewFilePath:(id *)a1;
- (id)_startNewFile;
- (void)checkForMaximumFileSize:(long long)a0 wantsCompressed:(BOOL)a1 outDidCreateNewFile:(BOOL *)a2 outNewFilePath:(id *)a3;
- (void)cullFilesMaxFileCount:(long long)a0;
- (id)initWithFolder:(id)a0 baseName:(id)a1;
- (BOOL)logData:(id)a0 outDidCreateNewFile:(BOOL *)a1 outNewFilePath:(id *)a2;
- (id)startNewFile;

@end
