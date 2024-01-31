@class NSObject, VSSpeechRequest, NSOperation, NSMutableArray;
@protocol VSSpeechTaskProtocol, OS_dispatch_queue;

@interface VSSpeechTaskQueue : NSObject

@property (retain, nonatomic) NSMutableArray *eagerTasks;
@property (retain, nonatomic) NSMutableArray *speakTasks;
@property (retain, nonatomic) NSOperation<VSSpeechTaskProtocol> *currentTask;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } threadMutex;
@property (nonatomic) struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } threadMutexAttr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue;
@property (retain, nonatomic) VSSpeechRequest *lastSynthesisRequest;
@property (nonatomic) unsigned long long lastSynthesisRequestCreatedTimeStamp;

+ (id)mainDeviceQueue;
+ (void)cancelTasksWithDelegate:(id)a0;
+ (id)parallelQueueWithIdentifier:(id)a0;

- (void)cancelTask:(id)a0;
- (id)init;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)createdTimestampWithTask:(id)a0;
- (void)resumeCurrentTask;
- (void)spinNextTask;
- (void)suspendCurrentTask;
- (id)taskWithCreatedTimeStamp:(unsigned long long)a0;
- (id)tasksWithDelegate:(id)a0;

@end
