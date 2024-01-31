@class MXDateUtil, NSObject;
@protocol OS_os_log, MXStorageUtilProtocol;

@interface MXSourcePathUtil : NSObject <MXSourcePathUtilProtocol>

@property (retain) MXDateUtil *dateUtil;
@property (retain) id<MXStorageUtilProtocol> storageUtil;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (id)_filePathOfDiagnosticSourcePayloadForDate:(id)a0 andSourceDirectory:(id)a1;
- (id)_filePathOfMetricSourcePayloadForDate:(id)a0 andSourceDirectory:(id)a1;
- (void)_removeFilesForSourceID:(long long)a0;
- (void)_removeFilesForSourceID:(long long)a0 andClient:(id)a1;
- (id)_setupSourceDirectoryForSourceID:(long long)a0 andBundleID:(id)a1;
- (id)_sourceDirectoryForSource:(long long)a0 andBundleID:(id)a1;
- (void)cleanDataDirectoryForSource:(long long)a0;
- (void)cleanDiagnosticsDirectoryForSource:(long long)a0 andClient:(id)a1;
- (id)filePathOfDiagnosticSourcePayloadForSourceID:(long long)a0 andBundleID:(id)a1 andDate:(id)a2;
- (id)filePathOfMetricSourcePayloadForSourceID:(long long)a0 andBundleID:(id)a1 andDate:(id)a2;
- (id)initWithDateUtil:(id)a0 andStorageUtil:(id)a1;
- (void)removeDeliveredDiagnosticsForSourceID:(long long)a0 forDate:(id)a1;

@end
