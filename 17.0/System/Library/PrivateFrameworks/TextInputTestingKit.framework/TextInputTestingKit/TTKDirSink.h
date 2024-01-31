@class NSString, NSDictionary, NSMutableArray;

@interface TTKDirSink : NSObject <TTKTestCaseSink> {
    NSString *_rootDir;
    NSString *_inputMode;
    NSDictionary *_layouts;
    BOOL _writeOnFlush;
    unsigned int _maxTestCasesPerFile;
    unsigned int _maxFilesPerDirectory;
    NSMutableArray *_testCasesToWrite;
    unsigned int _dirCounter;
    unsigned int _fileCounter;
    NSString *_currDir;
    NSMutableArray *_testCaseDirs;
    NSMutableArray *_testCaseFiles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)flush;
- (void).cxx_destruct;
- (void)addLayouts:(id)a0;
- (void)flushFiles;
- (id)init:(id)a0 inputMode:(id)a1 layouts:(id)a2 writeOnFlush:(BOOL)a3 maxTestCasesPerFile:(unsigned int)a4 maxFilesPerDirectory:(unsigned int)a5;
- (void)pushNextTestCase:(id)a0;

@end
