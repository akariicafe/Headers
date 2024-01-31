@class NSString;

@interface AUCrashHandler : NSObject <OSADiagnosticObserver> {
    int _watchedPid;
    id /* block */ _crashCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_bundleIdentifierIsApple:(id)a0;
+ (id)_deanonymizeUserHomePath:(id)a0;
+ (BOOL)_isAppleApplicationInPath:(id)a0 bundle:(id)a1;
+ (BOOL)_pathIsApple:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didWriteDiagnosticLog:(id)a0 logId:(id)a1 logFilePath:(id)a2 logInfo:(id)a3 error:(id)a4;
- (id)initWithPid:(int)a0 withCrashBlock:(id /* block */)a1;
- (void)willWriteDiagnosticLog:(id)a0 logId:(id)a1 logInfo:(id)a2;

@end
