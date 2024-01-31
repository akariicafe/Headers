@class NSObject;
@protocol OS_os_log;

@interface MXPayloadValidator : NSObject

@property (retain) NSObject<OS_os_log> *logHandle;

- (BOOL)_validatePayload:(id)a0;
- (void).cxx_destruct;
- (BOOL)validatePayload:(id)a0;
- (void)_sanitizeDeviceMetadataForDiagnostic:(id)a0;
- (BOOL)_validateHangTracerData:(id)a0;
- (BOOL)_validatePowerlogData:(id)a0;
- (BOOL)_validateReportCrashData:(id)a0;
- (BOOL)_validateSpinTracerData:(id)a0;
- (id)initWithLogHandle:(id)a0;

@end
