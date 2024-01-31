@class NSObject, NSMutableSet, MXDateUtil;
@protocol OS_os_log, MXSourcePathUtilProtocol;

@interface MXDiagnosticServices : NSObject <MXDiagnosticServicesProtocol>

@property (readonly, retain) NSMutableSet *services;
@property (retain) id<MXSourcePathUtilProtocol> sourcePathUtil;
@property (retain) MXDateUtil *dateUtil;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (void)_createServicesForClient:(id)a0;
- (id)_diagnosticPayloadForClient:(id)a0 andDate:(id)a1;
- (id)_diagnosticsFromServicesForClient:(id)a0 dateString:(id)a1;
- (void)_startServices;
- (void)_stopServices;
- (void)cleanServiceDiagnosticsDirectoriesForClient:(id)a0;
- (id)diagnosticPayloadForClient:(id)a0 andDate:(id)a1;
- (id)diagnosticPayloadForClient:(id)a0 isExtension:(BOOL)a1 andMainAppBundleID:(id)a2 andDate:(id)a3;
- (id)initWithSourcePathUtil:(id)a0 andDateUtil:(id)a1;

@end
