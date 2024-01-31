@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXDebugPlatform : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sysdiagnoseBlockQueue;
@property (readonly, nonatomic) NSMutableDictionary *sysdiagnoseBlockRegistry;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)executeSysdiagnoseBlocks;
- (void)installSysdiagnoseBlock:(id)a0 blockToRun:(id /* block */)a1;
- (void)simulateCrash:(const char *)a0;

@end
