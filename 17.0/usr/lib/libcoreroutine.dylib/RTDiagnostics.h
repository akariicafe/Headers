@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {
    RTDefaultsManager *_defaultsManager;
    RTPlatform *_platform;
    NSMutableArray *_diagnosticProviders;
}

+ (BOOL)createArchiveSourceURL:(id)a0 destinationURL:(id)a1 error:(id *)a2;
+ (id)createDiagnosticsURLWithError:(id *)a0;
+ (BOOL)fileNameEligibleForCollection:(id)a0;
+ (id)stringFromDateWithFormat;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchPathToDiagnosticFilesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addDiagnosticProvider:(id)a0;
- (void)logProcessDiagnosticInformation;
- (id)_collectBackupWithError:(id *)a0;
- (id)_collectDiagnosticFilesWithOptions:(id)a0 error:(id *)a1;
- (void)_fetchPathToBackupWithHandler:(id /* block */)a0;
- (void)_fetchPathToDiagnosticFilesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchPathToBackupWithHandler:(id /* block */)a0;
- (id)initWithDefaultsManager:(id)a0 platform:(id)a1;
- (void)logDiagnosticStateWithReason:(id)a0;

@end
