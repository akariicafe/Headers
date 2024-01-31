@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface NSConcreteTask : NSTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_dictionary;
    id /* block */ _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    char _qos;
    _Atomic BOOL _isSpawnedProcessDisclaimed;
}

- (void)terminate;
- (BOOL)isSpawnedProcessDisclaimed;
- (long long)qualityOfService;
- (id)init;
- (id)arguments;
- (id /* block */)terminationHandler;
- (void)dealloc;
- (void)setArguments:(id)a0;
- (BOOL)suspend;
- (void)setQualityOfService:(long long)a0;
- (void)setTaskDictionary:(id)a0;
- (long long)_platformExitInformation;
- (void)waitUntilExit;
- (id)standardError;
- (void)setEnvironment:(id)a0;
- (id)taskDictionary;
- (void)launch;
- (long long)terminationReason;
- (id)environment;
- (void)terminateTask;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (id)preferredArchitectures;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)_withTaskDictionary:(id /* block */)a0;
- (int)terminationStatus;
- (BOOL)isRunning;
- (BOOL)launchAndReturnError:(id *)a0;
- (BOOL)resume;
- (void)setLaunchPath:(id)a0;
- (void)_setTerminationHandler:(id /* block */)a0;
- (void)setStandardError:(id)a0;
- (id)launchPath;
- (id)standardInput;
- (void)setCurrentDirectoryPath:(id)a0;
- (long long)suspendCount;
- (void)interrupt;
- (void)setStandardInput:(id)a0;
- (void)setStandardOutput:(id)a0;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)setTerminationHandler:(id /* block */)a0;
- (id)standardOutput;
- (id)currentDirectoryPath;
- (int)processIdentifier;
- (void)setPreferredArchitectures:(id)a0;
- (int)_procid;

@end
