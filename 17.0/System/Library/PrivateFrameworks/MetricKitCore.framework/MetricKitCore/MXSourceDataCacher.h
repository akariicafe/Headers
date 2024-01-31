@class NSObject;
@protocol OS_os_log, MXSourcePathUtilProtocol, MXStorageUtilProtocol, MXBundleUtilProtocol;

@interface MXSourceDataCacher : NSObject <MXSourceDataCacherProtocol>

@property (retain) id<MXSourcePathUtilProtocol> sourcePathUtil;
@property (retain) id<MXStorageUtilProtocol> storageUtil;
@property (retain) id<MXBundleUtilProtocol> bundleUtil;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (id)initWithSourcePathUtil:(id)a0 andStorageUtil:(id)a1 andBundleUtil:(id)a2;
- (BOOL)saveToSourceDirectoryWithDiagnosticSourcePayload:(id)a0;
- (BOOL)saveToSourceDirectoryWithMetricSourcePayload:(id)a0;

@end
