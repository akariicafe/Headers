@class PGManager, NSString, NSObject, NSMutableSet, PHAStorytellingOnDemandTaskHandler, PHAStorytellingClientRequestHandler;
@protocol PHATask, OS_os_log;

@interface PHAStorytellingWorker : PHAWorker <PHAStorytellingOnDemandTaskHandlerDelegate, PHAClientDispatcher> {
    PHAStorytellingClientRequestHandler *_graphClientHandler;
    PHAStorytellingOnDemandTaskHandler *_storytellingOnDemandTaskHandler;
    PGManager *_graphManager;
    id<PHATask> _taskToRun;
    NSMutableSet *_taskTracker;
    NSObject<OS_os_log> *_loggingConnection;
    unsigned long long _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tasksForBackgroundAnalysis;
+ (Class)onDemandTaskHandlerClass;
+ (long long)applicationDataFolderIdentifier;
+ (id)photoLibraryNonIntensiveTasks;
+ (id)graphNonIntensiveTasks;
+ (short)workerType;
+ (Class)clientQueryHandlerClass;
+ (id)_legacyTasksForBackgroundAnalysis;

- (id)loggingConnection;
- (id)statusAsDictionary;
- (void)shutdown;
- (void)updateState:(unsigned long long)a0;
- (void)startListeningToLibraryChanges;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)targetForInvocation:(id)a0 shouldBackgroundActivities:(BOOL *)a1;
- (void)stopListeningToLibraryChanges;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (BOOL)isQuiescent;
- (void)photoLibraryDidChange:(id)a0;
- (void)onDemandTaskHandlerStartingOperation:(id)a0;
- (id)initWithPhotoAnalysisManager:(id)a0;
- (BOOL)allowsForegroundTasks;
- (BOOL)shouldAllowBackgroundActivity;
- (void)onDemandTaskHandlerDidFinishOperation:(id)a0;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)cooldown;
- (unsigned long long)workerStateForScenario:(unsigned long long)a0;
- (BOOL)_shouldRunTaskWithName:(id)a0 period:(double)a1 version:(unsigned long long)a2;
- (id)tasksForScenario:(unsigned long long)a0;

@end
