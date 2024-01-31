@class VMUTask, NSString, NSArray;

@interface VMUProcInfo : NSObject {
    unsigned int _task;
    VMUTask *_vmuTask;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { long long tv_sec; int tv_usec; } _startTime;
    BOOL _isZombie;
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) BOOL isSemiCriticalProcess;
@property (readonly, nonatomic) BOOL isSemiCriticalProcessWithNoTimeLimit;

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)a0;
+ (int)processParentId:(int)a0;

- (int)ppid;
- (BOOL)terminate;
- (int)cpuType;
- (BOOL)signal:(int)a0;
- (id)firstArgument;
- (BOOL)isMachO;
- (unsigned long long)hash;
- (id)platformName;
- (id)arguments;
- (id)initWithVMUTask:(id)a0;
- (void)dealloc;
- (unsigned int)platform;
- (unsigned int)task;
- (id)initWithTask:(unsigned int)a0;
- (void)update;
- (BOOL)isApp;
- (long long)compareByUserAppName:(id)a0;
- (id)userAppName;
- (int)pid;
- (long long)compareByName:(id)a0;
- (long long)compare:(id)a0;
- (id)valueForEnvVar:(id)a0;
- (struct timeval { long long x0; int x1; })startTime;
- (BOOL)isRunning;
- (id)description;
- (BOOL)isNative;
- (void).cxx_destruct;
- (id)procTableName;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)a0;
- (id)envVars;
- (id)name;
- (BOOL)isZombie;
- (id)initWithPid:(int)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCFM;
- (id)requestedAppName;

@end
