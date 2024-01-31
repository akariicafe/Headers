@class NSString;

@interface PHASharedLibrarySuggestionGenerationTask : NSObject <PHATask> {
    short _taskType;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL didProduceContent;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)resetSuggestionsWithGraphManager:(id)a0 error:(id *)a1;

- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (void)_sendNotificationWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)initWithTaskType:(short)a0;
- (BOOL)runWithGraphManager:(id)a0 withIncrementalChange:(id)a1 progressReporter:(id)a2 error:(id *)a3;

@end
