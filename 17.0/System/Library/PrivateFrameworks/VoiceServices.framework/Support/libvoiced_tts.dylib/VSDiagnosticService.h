@class NSString, NSDictionary;

@interface VSDiagnosticService : NSObject

@property (retain, nonatomic) NSString *audioDumpPath;
@property (retain, nonatomic) NSDictionary *audioDumpFileAttributes;

+ (id)defaultService;

- (void)createDirectoryIfNeeded;
- (void)dumpInstrumentMetrics:(id)a0 withTimestamp:(long long)a1;
- (id)initWithDirectory:(id)a0;
- (void)removeOldFiles;
- (void)dumpCompressedAudio:(id)a0 forRequest:(id)a1;
- (void)dumpStreamAudio:(id)a0 forRequest:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)totalDiagnosticFileSize;
- (void)collectTailspin:(id /* block */)a0;
- (void)removeDirectory;

@end
