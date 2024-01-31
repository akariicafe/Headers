@class NSArray, NSDictionary, NSString, NSDate, VMUProcessObjectGraph;

@interface MemoryResourceException : NSObject <NSCopying> {
    unsigned long long _ioAccelDirtySwappedSize;
}

@property (readonly) long long version;
@property (readonly) unsigned int task;
@property (readonly) unsigned int suspensionToken;
@property (readonly) NSDictionary *footprintOutput;
@property (readonly) NSArray *ioSurfaceInfo;
@property (readonly) NSArray *ioAccelMemoryInfo;
@property (readonly) NSArray *ioAccelMemoryInfoErrors;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) unsigned long long cid;
@property (readonly) NSDate *startTime;
@property (readonly) NSDate *currentTime;
@property (readonly) unsigned int dirtyFlags;
@property (readonly) unsigned int procFlags;
@property (readonly) long long exceptionCode0;
@property (readonly) unsigned long long crashedThreadId;
@property (readonly) unsigned long long ledgerPhysFootprint;
@property (readonly) unsigned long long ledgerPhysFootprintPeak;
@property (readonly) unsigned long long ledgerInternal;
@property (readonly) unsigned long long ledgerInternalCompressed;
@property (readonly) unsigned long long ledgerAlternateAccounting;
@property (readonly) unsigned long long ledgerAlternateAccountingCompressed;
@property (readonly) unsigned long long ledgerPurgeableNonvolatile;
@property (readonly) unsigned long long ledgerPurgeableNonvolatileCompressed;
@property (readonly) unsigned long long ledgerPageTable;
@property (readonly) unsigned long long ledgerIOKitMapped;
@property (readonly) unsigned long long ledgerWiredMem;
@property (readonly) unsigned long long ledgerNetworkNonvolatile;
@property (readonly) unsigned long long ledgerNetworkNonvolatileCompressed;
@property (readonly) NSArray *osLogs;
@property (readonly) NSDictionary *cachedMetaDataDict;
@property (retain) NSString *memgraphError;
@property (readonly) VMUProcessObjectGraph *memoryGraph;
@property (readonly) NSDictionary *executionStack;
@property (readonly) NSString *execName;
@property (readonly) NSString *execPath;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *coalitionBundleID;
@property (readonly) long long exceptionType;
@property (readonly) unsigned long long limitValue;
@property (readonly) long long upTime;
@property (readonly) BOOL is64Bit;
@property (readonly) NSString *hwModel;
@property (readonly) NSDictionary *osVersion;
@property BOOL isMSLEnabled;

+ (id)resourceExceptionFromTask:(unsigned int)a0 error:(id *)a1;
+ (id)resourceExceptionFromLogFileHandle:(id)a0 error:(id *)a1;
+ (void)extractExecNameAndBundleIDMinimal:(unsigned int)a0 execNameOut:(id *)a1 bundleIDOut:(id *)a2;

- (long long)_saveLogFileWithHandle:(id)a0 error:(id *)a1;
- (BOOL)isFirstParty;
- (void)dealloc;
- (id)prettyPrintIOAccelMemoryInfo;
- (void)populateVerboseDiagnostics:(BOOL)a0;
- (BOOL)generateMemoryGraphWithContentLevel:(unsigned int)a0 memgraphFailedReasonOut:(unsigned long long *)a1;
- (id)prettyPrintIOSurfaceInfo;
- (id)prettyPrintBinaryImages;
- (void)_populateVerboseDiagnosticsWithOptions:(unsigned long long)a0 contentLevel:(unsigned int)a1 timeoutSecs:(unsigned long long)a2 memgraphFailedReasonOut:(unsigned long long *)a3;
- (id)prettyPrintBacktrace:(BOOL)a0;
- (void).cxx_destruct;
- (void)releaseAnalyzedTask;
- (id)createMetaDataDict;
- (BOOL)saveLogFileWithHandle:(id)a0 error:(id *)a1;
- (id)createLiteMetaDataDict;
- (id)_symbolOwners;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
