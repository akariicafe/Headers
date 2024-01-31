@class NSMutableDictionary, NSString, NSDictionary, VMUTaskMemoryCache, NSArray, NSMutableArray, NSDate;

@interface VMUProcessDescription : NSObject {
    VMUTaskMemoryCache *_memoryCache;
    int _pid;
    BOOL _taskIsCorpseOrCore;
    BOOL _taskIsTranslated;
    NSString *_hardwareModel;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    unsigned int _platform;
    BOOL _is64Bit;
    struct timeval { long long tv_sec; int tv_usec; } _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}

@property (readonly, nonatomic) unsigned long long physicalFootprint;
@property (readonly, nonatomic) unsigned long long physicalFootprintPeak;
@property (readonly, nonatomic) unsigned int idleExitStatus;

+ (id)parseBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0 withArchitecture:(struct _CSArchitecture { int x0; int x1; })a1;

- (int)cpuType;
- (BOOL)isAppleApplication;
- (void)dealloc;
- (BOOL)isTranslated;
- (unsigned int)task;
- (int)parentPid;
- (id)_osVersionDictionary;
- (void)cleansePathsIncludingBinaryImageList:(BOOL)a0;
- (id)initWithPid:(int)a0 orTask:(unsigned int)a1;
- (BOOL)is64Bit;
- (id)executablePath;
- (id)_buildVersionDictionary;
- (id)_binaryImagesDescriptionForRanges:(id)a0;
- (int)pid;
- (id)binaryImageDictionaryForAddress:(unsigned long long)a0;
- (id)processVersionDictionary;
- (id)_rangesOfBinaryImages:(id)a0 forBacktraces:(id)a1;
- (id)valueForEnvVar:(id)a0;
- (id)processName;
- (id)_systemVersionDescription;
- (id)dateAndVersionDescription;
- (id)binaryImages;
- (id)parentProcessName;
- (id)description;
- (id)date;
- (id)bundleIdentifier;
- (BOOL)initFromCorpseOrCore;
- (id)initWithVMUTaskMemoryCache:(id)a0 getBinariesList:(BOOL)a1;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (id)binaryImagesDescriptionForBacktraces:(id)a0;
- (id)processStatisticsDescription;
- (id)binaryImagesDescription;
- (void).cxx_destruct;
- (id)processDescriptionHeader;
- (id)initWithTask:(unsigned int)a0 getBinariesList:(BOOL)a1;
- (void)clearCrashReporterInfo;
- (void)initFromLiveProcess;
- (id)_sanitizeVersion:(id)a0;
- (id)_cpuTypeDescription;
- (id)parentProcessPath;
- (id)_bundleLock;
- (id)displayName;
- (id)processVersion;
- (id)_buildInfoDescription;
- (id)processIdentifier;
- (void)setCrashReporterInfo;

@end
