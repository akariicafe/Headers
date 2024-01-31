@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    NSString *_coreFilePath;
    BOOL _taskIsSelf;
    VMUTaskMemoryCache *_taskMemory;
    VMUProcessDescription *_processDescription;
    BOOL _processDescriptionInitialized;
}

@property (readonly, nonatomic) unsigned long long taskType;

- (id)processDescription;
- (unsigned int)taskPort;
- (void)dealloc;
- (BOOL)isTranslated;
- (id)initWithTask:(unsigned int)a0;
- (int)pid;
- (void).cxx_destruct;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })createSymbolicatorWithFlags:(unsigned int)a0 andNotification:(id /* block */)a1;
- (id)memoryCache;
- (id)coreFilePath;
- (BOOL)hasStartedWithErrorString:(const char **)a0;
- (id)initWithCorePath:(id)a0;
- (id)ioSurfaceDescriptions;
- (BOOL)isCore;
- (BOOL)taskIsSelf;

@end
