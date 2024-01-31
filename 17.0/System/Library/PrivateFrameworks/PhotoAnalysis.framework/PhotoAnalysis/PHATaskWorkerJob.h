@class MAProgressReporter, PHATaskHealthRecorder, NSObject, PGManager;
@protocol PHATask, OS_dispatch_queue;

@interface PHATaskWorkerJob : PHAWorkerJob {
    PGManager *_graphManager;
    PHATaskHealthRecorder *_taskHealthRecorder;
    NSObject<OS_dispatch_queue> *_executionQueue;
    MAProgressReporter *_progressReporter;
}

@property (readonly, nonatomic) id<PHATask> task;
@property (readonly) unsigned long long taskCompletionState;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) BOOL isCancelled;

+ (id)taskHealthRecorderLoggingConnection;
+ (id)taskProgressLoggingConnection;

- (BOOL)finished;
- (void).cxx_destruct;
- (float)completionScore;
- (BOOL)_processWithJobTimeHandler:(id)a0 loggingConnection:(id)a1 recordHealth:(BOOL)a2 error:(id *)a3;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 graphManager:(id)a2 task:(id)a3;
- (void)markTaskAsCompleted;
- (BOOL)processWithJobTimeHandler:(id)a0 loggingConnection:(id)a1 error:(id *)a2;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;

@end
